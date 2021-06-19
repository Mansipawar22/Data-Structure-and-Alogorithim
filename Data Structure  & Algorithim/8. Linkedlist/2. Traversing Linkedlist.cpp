#include<iostream>


using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data <<"---->";
        current = current->next;
    }
    if(current == NULL)
    {
        cout << "Null";
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printList(head);
    return 0;
}