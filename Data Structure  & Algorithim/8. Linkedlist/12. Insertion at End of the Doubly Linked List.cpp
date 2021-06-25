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
        next = NULL;
        prev = NULL;
    }
};

void printDLL(Node *head)
{
    Node *cur = head;
    while(cur != NULL)
    {
        cout << cur->data << "<==>";
        cur=cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

Node *insertEnd(Node *head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        return temp;
    }
    Node *cur =  head;
    while (cur->next != NULL)
    {
        cur=cur->next;
    }
    cur->next = temp;
    temp->prev = cur;
    return head;
}

int main()
{
    Node *head = new Node(10);
    printDLL(head);
    cout<<endl;
    head = insertEnd(head, 15);
    printDLL(head);
    return 0;
}