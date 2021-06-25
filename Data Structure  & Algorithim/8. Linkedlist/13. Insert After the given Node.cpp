#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        next = NULL;
        prev = NULL;
        data = x;
    }
};

void printDLL(Node *head)
{
    Node *cur = head;
    while(cur != NULL)
    {
        cout << cur->data << "<===>";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

/*
    Insertion after the given Node work in O(1) Time only when
    we are gien the pointer of the Node after which we want to insert
    the new Node. Remember that if we are given the pointer or reference of the Node
    then we have to traverse the DLL and it will again O(n);
    T(n) => O(1)
*/
Node *insertAfter(Node *head, Node *prev_node, int data)
{
    if(prev_node == NULL)
    {
        cout << "Given Node after you want to insert can't be NULL.";
        return head;
    }
    Node *new_node = new Node(data);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;
    if(new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }
    return head;
}

int main()
{
    Node *head = new Node(10);
    printDLL(head);
    head = insertAfter(head, head, 15);
    head = insertAfter(head, head, 23);
    head = insertAfter(head, head, 62);
    cout << endl;
    printDLL(head);
    head = insertAfter(head, head->next->next, 85);
    cout << endl;
    printDLL(head);
    return 0;
}