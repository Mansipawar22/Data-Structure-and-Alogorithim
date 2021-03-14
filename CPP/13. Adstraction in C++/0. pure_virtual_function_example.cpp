#include<iostream>

using namespace std;

class Base
{
    public:
        virtual void show() = 0;
};


class Driven: public Base
{
    public:
        void show()
        {
            cout << "Drive class invoking." << endl;
        }
};


int main()
{
    Base *b;
    Driven d;
    b = &d;
    b->show();
    return 0;
}