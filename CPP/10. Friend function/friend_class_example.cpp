#include<iostream>

using namespace std;

class A
{
    private:
        int x;
    public:
        A()
        {
            x = 10;
        }
        friend class B; //friend class
};

class B
{
    private:
        int y;
    public:
        void ShowA(A& a)
            {
                /*Since B is the friend of A, 
                B can access the all the private,
                and protected */
                cout << "A :: a" << a.x << endl;

            }
};

int main()
{
    A a;
    B b;
    b.ShowA(a);
    return 0;
}