#include<iostream>
#include<vector>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

//Naive Solution
//T(n) = O(n)
//space => O(n)
// Required two traversion of the list.
Node *reverseNaive(Node *head)
{
    vector<int> arr;
    for(Node *cur = head; cur != NULL; cur = cur->next)
    {
        arr.push_back(cur->data);
    }
    for(Node *cur = head; cur != NULL; cur = cur->next)
    {
        cur->data = arr.back();
        arr.pop_back();
    }
    return head;
}

//Efficient Solution
Node *reverseEfficient(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        return head;
    }
    Node *cur = head;
    Node *prev = NULL;
    while (cur != NULL)
    {
        Node *Next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = Next;
    }
    return prev;
}

void printLL(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << "------>";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout <<"NULL.";
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printLL(head);
    head = reverseNaive(head);
    cout << endl;
    printLL(head);
    head = reverseEfficient(head);
    cout << endl;
    printLL(head);
    cout << "Succesfully reversed LinkedList." << endl;
    cout << "Pushing is working perfectly." << endl;
    return 0;
}