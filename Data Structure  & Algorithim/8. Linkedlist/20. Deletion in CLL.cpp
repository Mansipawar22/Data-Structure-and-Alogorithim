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

Node *insertendefficiently(Node *head, int d)
{
    Node *temp = new Node(d);
    if(head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next=temp;
    int t = temp->data;
    temp->data = head->data;
    head->data = t;
    return temp; // as a new head.
}

// Naive solution
Node *deletehead(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == head)
    {
        delete head;
        return NULL;
    }
    Node *cur = head;
    while (cur->next != head)
    {
        cur = cur->next;
    }
    cur->next = head->next;
    delete head;
    return (cur->next);
}

// efficient soluytion
Node *deleteHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if(head->next == head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = temp->next;
    delete temp;
    return head;
}


// naive Solution for deleting last Node.
Node *deleteEnd(Node *head)
{
    Node *cur = head;
    Node *prev = NULL;
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == head)
    {
        delete head;
        return NULL;
    }
    while (cur->next != head)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
    delete cur;
    return prev->next;
}

Node *deleteKth(Node *head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(k==1)
    {
        return deleteHead(head);
    }
    Node *cur = head;
    for (int i = 0; i < k-2; i++)
    {
        cur = cur->next;
    }
    Node *temp = cur->next;
    cur->next = temp->next;
    delete temp;
    return head;
}

void printCLL(Node *head)
{
    Node *cur = head;
    do
    {
        cout << cur->data << "-->";
        cur = cur->next;
    }
    while (cur != head);
}

int main()
{
    Node *head = new Node(1);
    head->next = head;
    head  = insertendefficiently(head, 2);
    head  = insertendefficiently(head, 3);
    head  = insertendefficiently(head, 4);
    head  = insertendefficiently(head, 5);
    head  = insertendefficiently(head, 6);
    head  = insertendefficiently(head, 7);
    head  = insertendefficiently(head, 8);
    head  = insertendefficiently(head, 9);
    head  = insertendefficiently(head, 10);
    head  = insertendefficiently(head, 11);
    head  = insertendefficiently(head, 12);
    head  = insertendefficiently(head, 13);
    head  = insertendefficiently(head, 14);
    head  = insertendefficiently(head, 15);
    // printCLL(head);
    // head = deleteHead(head);
    // cout << endl;
    // printCLL(head);
    head = deleteKth(head, 9);
    cout << endl;
    printCLL(head);
    return 0;
}