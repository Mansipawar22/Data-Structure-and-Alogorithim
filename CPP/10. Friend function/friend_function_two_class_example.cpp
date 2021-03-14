#include<iostream>

using namespace std;

class B; //forward Declaration

class A
{
    private:
        int x;
    public:
        void setData(int i)
        {
            x = i;
        }
        friend void min(A, B);
};


class B
{
    private:
        int y;
    public:
        void setData(int i)
        {
            y = i;
        }
        friend void min(A, B);
};

void min(A a, B b)
{
    if(a.x < b.y)
        {
            cout << a.x << " is Minimum." << endl;
        }
    else
        {
            cout << b.y << "is Minimum." << endl;
        }
    
}


int main()
{
    A a;
    B b;
    a.setData(5);
    b.setData(6);
    min(a, b);
    return 0;
}