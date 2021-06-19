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


int main()
{
    Node *head = new Node(10);  // creating the nodes1
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;         // pointing the node1 to node2
    temp1->next = temp2;
    
    // OR

    Node *first = new Node(1); // we can implement linked list like this too.

    first->next = new Node(2);
    first->next->next = new Node(3);
    first->next->next->next = new Node(4);
    return 0;
}