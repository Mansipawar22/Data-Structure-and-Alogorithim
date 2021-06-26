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
        next = prev = NULL;
    }
};

Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }
    Node *cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = temp;
    temp->prev = cur;
    return head;
}

void printDLL(Node *head)
{
    Node *cur = head;
    while(cur != NULL)
    {
        cout << cur->data << "<--->";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

Node *deleteEnd(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    Node *cur = head;
    while(cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->prev->next = NULL;
    free(cur);
    return head;
}




int main()
{
    Node *head = new Node(10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 60);
    printDLL(head);
    cout<<endl;
    head = deleteEnd(head);
    printDLL(head);
    return 0;
}