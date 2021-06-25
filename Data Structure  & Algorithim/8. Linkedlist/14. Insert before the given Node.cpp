#include<iostream>


using namespace std;


struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next=prev=NULL;
    }
};

void printDLL(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << "<====>";
        cur =  cur->next;
    }
    if(cur == NULL)
    {
        cout << "Null";
    }
}

Node *insertbefore(Node *head, Node *next_node, int data)
{
    if(next_node == NULL)
    {
        cout << "Given Node before which you want to insert a new Node, can not be Null.";
        return head;
    }
    Node *new_node =  new Node(data);
    new_node->prev = next_node->prev;
    next_node->prev = new_node;
    new_node->next = next_node;
    if(new_node->prev != NULL)
    {
        new_node->prev->next = new_node;
    }
    else{
        head = new_node;
    }
    return head;
}

int main()
{
    Node *head = new Node(10);
    printDLL(head);
    head = insertbefore(head, head, 3);
    head = insertbefore(head, head, 75);
    head = insertbefore(head, head, 67);
    head = insertbefore(head, head->next, 25);
    cout << endl;
    printDLL(head);
    head = insertbefore(head, head->next->next->next, 125);
    cout << endl;
    printDLL(head);
    return 0;
}