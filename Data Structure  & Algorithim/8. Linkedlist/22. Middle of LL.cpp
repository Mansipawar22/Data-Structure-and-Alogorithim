#include<iostream>

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

Node *sortinsertion(Node *head, int d)
{
    Node *temp = new Node(d);
    if(head== NULL)
    {
        return temp;
    }
    if(temp->data <= head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *cur = head;
    while (cur->next != NULL and cur->next->data < d)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    cur->next=temp;
    return head; 
}


// Naive Solution
// T(n) = O(n) + O(n)
void Printmiddle(Node *head)
{
    if(head == NULL)
        return;
    int count = 0;
    Node *cur;
    for(cur = head; cur != NULL;  cur= cur->next)
        count += 1;
    cur = head;
    for (int i = 0; i < count/2; i++)
    {
        cur = cur->next;
    }
    cout << "Middle Node is " << cur->data << "." << endl;
}

// Efiificent Solution
void printmiddle(Node *head)
{
    if(head == NULL)
        return;
    
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL and fast->next!= NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle Node is " << slow->data << "." << endl;
}

void printDLL(Node *head)
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

int main()
{
    Node *head = NULL;
    head=sortinsertion(head, 5);
    head=sortinsertion(head, 6);
    head=sortinsertion(head, 17);
    head=sortinsertion(head, 10);
    head=sortinsertion(head, 20);
    head=sortinsertion(head, 63);
    head=sortinsertion(head, 13);
    printDLL(head);
    cout << endl;
    Printmiddle(head);
    printmiddle(head);
    return 0;
}