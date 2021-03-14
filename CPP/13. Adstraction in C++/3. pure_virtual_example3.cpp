#include<iostream>

using namespace std;


//An Abstract class with an Cunstractor
class Base
{
    protected:
        int x;
    
    public:
        virtual void show() = 0;

        Base(int i)
        {
            x = i;
        }
};

class Derived: public Base
{
    public:
        int y;

        Derived(int i, int j):Base(i){y = j;}

        void show()
        {
            cout << "x is " << x << " and y is " << y << endl;
        }
};


int main()
{
    //Base *bp = new Derived(4, 5);
    Derived d(4,6);
    d.show();
    return 0;
}