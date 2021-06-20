#include<iostream>


using namespace std;


struct Node
{
    /* data */
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head; 
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "====>";
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout << "Null";
    }
}


int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printlist(head);cout << endl;
    cout << "Enter the  value to insert in the list.";
    int x;
    cin >> x;
    insertEnd(head, x);
    printlist(head);cout << endl;
    return 0;
}