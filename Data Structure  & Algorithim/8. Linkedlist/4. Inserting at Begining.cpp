#include<iostream>

using namespace std;


// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// Node *insertBegin(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     temp->next = head;
//     return temp;
// }
struct  Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
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
    Node *head = NULL;
    printlist(head);
    cout << endl;
    head = insertBegin(head, 30);
    printlist(head);
    cout << endl;
    head = insertBegin(head, 20);
    printlist(head);
    cout << endl;
    head = insertBegin(head, 10);
    printlist(head);
    cout << endl;
    head = insertBegin(head, 5);
    printlist(head);
    cout << endl;
    return 0;
}