#include<iostream>

using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << "---->";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

Node *deletePosition(Node *head, int pos)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(pos == 1 and head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else if(pos == 1 and head->next!= NULL)
    {
        Node *temp = head->next;
        free(head);
        return temp;
    }
    Node *cur = head;
    for (int i = 1; cur != NULL and i <= pos-2; i++)
    {
        cur = cur->next;
    }
    if(cur == NULL || cur->next == NULL)
    {
        return head;
    }
    Node *NEXT = cur->next->next;
    free(cur->next);
    cur->next = NEXT;
    return head;
}

int main()
{
    Node *head = new Node(10);
    // head = deletePosition(head, 1);
    // printlist(head);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head = deletePosition(head, 9);
    printlist(head);
    return 0;
}