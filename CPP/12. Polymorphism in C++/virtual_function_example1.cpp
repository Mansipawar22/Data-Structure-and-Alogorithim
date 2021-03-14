#include<iostream>


using namespace std;

class Base
{
    public:
        virtual void Display()
        {
            cout << "Base class Invoking." << endl;
        }
};

class Driven: public Base
{
     public:
        void Display()
        {
            cout << "Driven class invoking." << endl;
        }
};



int main()
{
    Base *b;
    Driven d;
    b = &d;
    b->Display();//overriding of function through refferance.
    d.Display();
    return 0;
}