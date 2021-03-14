#include<iostream>

using namespace std;

class A
{
    int x;
    public:
        A()
        {
            //Nothing
        }
        A(int i)
        {
            x = i;
        }
        void operator+(A);
        //void display();
};

void A::operator+(A a)
{
    int m = x + a.x;
    cout << "The result of the addition of two object." << m;
}

int main()
{
    A a1(5);
    A a2(20);
    a1+a2;
    return 0;
}