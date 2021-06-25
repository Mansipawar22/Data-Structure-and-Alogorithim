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

void Printlist(Node *head)
{
    Node *cur = head;
    while(cur != NULL)
    {
        cout << cur->data << "--->";
        cur = cur->next;
    }
    if(cur == NULL)
    {
        cout << "NULL";
    }
}

// Iterative Soltion
// T(n) = O(n)
// space = O(1)
int SearchIterative(Node *head, int d)
{
    int pos = 1;
    if(head == NULL)
    {
        return NULL;
    }
    Node *cur = head;
    while (cur != NULL)
    {
        if(cur->data == d)
        {
            return pos;
        }
        else{
            pos += 1;
            cur = cur->next;
        }
    }
    return -1;
}

// Recursive Solution
// T(n) = O(n)
// space = O(n)
int SearchRecursive(Node *head, int d)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == d)
    {
        return 1;
    }
    else{
        int res = SearchRecursive(head->next, d);
        if(res == -1)
        {
            return -1;
        }
        else{
            return res + 1;
        }
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(14);
    head->next->next = new Node(52);
    head->next->next->next = new Node(29);
    head->next->next->next->next = new Node(41);
    Printlist(head);
    cout << "\nEnter a number to search in the linked list:";
    int d;
    cin >> d;
    // cout << endl;
    cout << SearchIterative(head, d) << endl;
    cout << SearchRecursive(head, d) << endl;
    return 0;
}