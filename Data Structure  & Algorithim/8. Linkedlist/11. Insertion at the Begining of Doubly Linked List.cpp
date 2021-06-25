#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

void printDLL(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << "<===>";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

Node *insertBegining(Node *head, int d)
{
    Node *temp = new Node(d);
    if(head == NULL)
    {
        return temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        return temp;
    }
}


int main()
{
    Node *head = new Node(10);
    head = insertBegining(head, 5);
    head = insertBegining(head, 1);
    printDLL(head);
    return 0;
}