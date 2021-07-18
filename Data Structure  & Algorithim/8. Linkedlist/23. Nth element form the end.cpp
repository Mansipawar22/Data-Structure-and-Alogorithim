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

// Naive solution
// T(n) = O(n)
void printMiddle(Node *head, int n)
{
    Node *cur = head;
    int len = 1;
    for(Node *cur = head; cur->next != NULL; cur = cur->next)
    {
        len += 1;
    }
    cout << endl << len << endl;
    if(len < n)
    {
        return;
    }
    
    for (int i = 1; i < len - n + 1; i++)
    {
        cur = cur->next;
    }
    cout << cur->data << endl;
}

//Efficient solution
void printMiddleEfficient(Node *head, int n)
{
    if(head == NULL)
    {
        return;
    }
    Node *first = head;
    for (int i = 1; i <= n; i++)
    {
        if(first == NULL)
        {
            return;
        }
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<< second->data << endl;
}




void printLL(Node *head)
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);
    printLL(head);
    printMiddle(head, 3);
    printMiddleEfficient(head, 3);
    return 0;
 }