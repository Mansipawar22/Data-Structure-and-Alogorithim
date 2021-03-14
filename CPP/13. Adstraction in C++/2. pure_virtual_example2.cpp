#include<iostream>

using namespace std;

class Base
{
    public:
        virtual void show() = 0;
};

class Derive: public Base
{

};

int main()
{
    Derive d;
    return 0;
}