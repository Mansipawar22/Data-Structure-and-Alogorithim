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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head;
    printCLL(head);

    return 0;
}