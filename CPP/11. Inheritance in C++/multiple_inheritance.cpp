#include<iostream>

using namespace std;

class A
{
    public:
        int a;
        
        
    public:
        void GetA()
        {
            cout << "Enter the value of A: ";
            cin >> a;
        }
};

class B
{
    public:
        int b;
        
        
    public:
        void GetB()
        {
            cout << "Enter the value of B: ";
            cin >> b;
        }
};

class C: public A, public B
{
    public:
        void Display()
        {
            cout << "Value of A is: " << A::a << endl;
            cout << "Value of B is: " << B::b << endl;
            cout << "Addition of a + b is: " << A::a + B::b << endl;
        } 
};



int main()
{
    C c;
    c.A::GetA();
    c.B::GetB();
    c.Display();
    return 0;
}