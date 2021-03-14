#include<iostream>

using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout << "Print Base class." << endl;
        }
        void Show()
        {
            cout << "show Base class." << endl;
        }
};

class Driven: public Base
{
    public:
        void print()//print () is already virtual function in derived class,
        {
            cout << "Print Driven class." << endl;
        }
        void Show()
        {
            cout << "show Driven class." << endl;
        }
};

int main()
{
    Base *ptr;
    Driven obj;
    ptr = &obj;
    //virtual function, binded at runtime (Runtime polymorphism)
    ptr->print();
    // Non-virtual function, binded at compile time
    ptr->Show();
    return 0;
// }