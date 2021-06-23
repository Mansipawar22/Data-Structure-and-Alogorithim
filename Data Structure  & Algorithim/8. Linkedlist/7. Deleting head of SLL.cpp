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

Node *deleteHead(Node *head)
{
    if(head == NULL)
        return NULL;
    else{
        Node *temp = head->next; // when we don't want to leak the memory
            
        delete head;
        return temp;
        //temp = head->next; // Memory leaking whenw e don't want to create new Node.
    }
}

void printlist(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    cout << head;cout<<endl;
    printlist(head);cout<<endl;
    head = deleteHead(head);
    cout << head;cout<<endl;
    printlist(head);cout<<endl;
    return 0;
}