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


// Naive solution
Node *inserthead(Node *head, int d)
{
    Node *temp = new Node(d);
    if(head == NULL)
    {
        temp->next = temp;
        return temp; 
    }
    Node *cur = head;
    while(cur->next != head)
    {
        cur = cur->next;
    }
    temp->next = head;
    cur->next = temp;
    return temp;
}

// Efficient Solution
Node *insertheadefficiently(Node *head, int d)
{
    Node *temp = new Node(d);
    if(head == NULL)
    {
        temp ->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int t = temp->data;
    temp->data = head->data;
    head->data = t;
    return head;
}


// Naive Solution for insert at end is same as naive of insert at head , 
// difference is we have to return head instead of temp as a new head
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

void printCLL(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    Node *cur = head;
    do
    {
        cout << " " << cur->data << "-->";
        cur = cur->next;
    }
    while (cur != head);
    // cout << endl;
}

int main()
{
    Node *head = NULL;
    head = inserthead(head, 10);
    // head = inserthead(head, 9);
    // head = insertheadefficiently(head, 8);
    head = insertendefficiently(head, 11);
    printCLL(head);
    return 0;
}