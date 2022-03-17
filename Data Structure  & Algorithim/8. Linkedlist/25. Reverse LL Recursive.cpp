#include<bits/stdc++.h>



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


Node *revRecursive(Node *curr, Node *prev)
{
    if( curr == NULL)
    {
        return prev;
    }

    Node *next = curr->next;
    curr->next = prev;
    return revRecursive(next, curr);
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    return revRecursive(curr, prev);
}
 



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
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    // Node *prev = NULL;
    // Node *curr = head;   
    printList(head);
    reverse(head);
    cout <<endl;
    printList(head);
    return 0;
}