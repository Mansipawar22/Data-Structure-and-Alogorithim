#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *sortinsertion(Node *head, int d)
{
    Node *temp = new Node(d);
    if(head== NULL)
    {
        return temp;
    }
    if(temp->data <= head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *cur = head;
    while (cur->next != NULL and cur->next->data < d)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    cur->next=temp;
    return head; 
}

void printDLL(Node *head)
{
    Node *cur = head;
    while(cur != NULL)
    {
        cout << cur->data << "--->";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

int main()
{
    Node *head = NULL;
    printDLL(head);
    cout << endl;
    head=sortinsertion(head, 5);
    printDLL(head);
    cout << endl;
    head=sortinsertion(head, 6);
    printDLL(head);
    cout << endl;
    head=sortinsertion(head, 17);
    printDLL(head);
    cout << endl;
    head=sortinsertion(head, 10);
    printDLL(head);
    cout << endl;
    return 0;
}