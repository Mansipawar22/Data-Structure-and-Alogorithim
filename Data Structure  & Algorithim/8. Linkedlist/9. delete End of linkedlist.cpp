#include<iostream>


using namespace std;

// Total tme Take 7 min 39 sec

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

void printlist(Node *head)
{
    Node *cur =  head;
    while(cur != NULL)
    {
        cout << cur->data << "--->";
        cur = cur->next;
    }
    if(cur == NULL)
    cout << "NULL";
}


Node *deleteEnd(Node *head)
{
    if(head  == NULL)
    {
        return NULL;
    }
    if( head->next == NULL)
    {
        free(head);
        return NULL;
    }
    Node *cur  = head;
    while (cur->next->next != NULL)
    {
        cur = cur->next;
    }
    free(cur->next->next);
    cur->next = NULL;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head = deleteEnd(head);
    printlist(head);
    return 0;
}