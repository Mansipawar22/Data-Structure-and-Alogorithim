#include<iostream>


using namespace std;

int maxsize = 10;
int stack[10];
int top = -1;
int i;

int Push()
{
        int data;
        cin >> data ;
        if(top <= maxsize)
        {
            top = top + 1;
            stack[top] = data;
        }
        return 0;
}

int Pop()
{
        int temp;
        if (top != -1)
        {
            temp = stack[top];
            top = top - 1;
        }
        
        return 0;
}
    
int Display()
{
        for(i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        if(top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        return 0;
}

int isEmpty()
{
        if(top == -1)
        {
            return 1;
        }
        else
        {
            return 0 ;
        }
        
}
 
int isFull()
{
        if(top == maxsize)
        {
            return 1;
        }
        else
        {
            return 0 ;
        }
}


int main()
{
    int choice = 0;
    while (choice != 4)
    {
        cin >> choice ;
        switch(choice)
        {
            case 1:
            {
                Push();
                break;
            }
            case 2:
            {
            Pop();
                break;
            }
            case 3:
            {
                Display();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                cout << "Enter valid choice." << endl;

            }
        };
    }
    return 0;
}