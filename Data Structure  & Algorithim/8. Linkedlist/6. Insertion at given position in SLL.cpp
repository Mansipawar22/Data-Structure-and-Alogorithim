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
        cout << cur->data << "------>";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

Node *insertionatposition(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if(pos == 1)                // case when we want to insert at first position then
    {                           // then we return temp as new head.
        temp->next=head;
        return temp;
    }
    Node *cur =  head;
    for (int i = 1; i <= pos-2 and cur != NULL; i++)
    {
        cur = cur->next;
    }
    if(cur == NULL)
    {
        return head;
    }
    temp->next = cur->next;
    cur->next = temp;
    return head;
}

int main()
{
    Node *head = NULL;
    printlist(head);cout<<endl;
    head = insertionatposition(head, 1, 10);
    printlist(head);cout<<endl;
    head->next = new Node(38);
    printlist(head);cout<<endl;
    head->next->next = new Node(48);
    printlist(head);cout<<endl;
    head = insertionatposition(head, 1, 5);
    printlist(head);cout<<endl;
    head = insertionatposition(head, 6, 51);
    printlist(head);cout<<endl;
    return 0;
}