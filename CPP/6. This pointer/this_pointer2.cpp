#include<iostream>

using namespace std;

class Test
{
    int x;
    int y;
    public:
    Test &setDataX(int a)
    {
        this->x = a;
        //Where ' this->x ' means x id the object variable of Current object 'obj1'.
        return *this;
        // ' *this ' will return the address of current object's object variable which is x.
    }
    Test &setDataY(int b)
    {
        this->y = b;
        //Where ' this->y ' means y id the object variable of Current object ''.
        return *this;
        // ' *this ' will return the address of current object's object variable which is y.
    }
    void getDataXY()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

};


int main()
{
    Test obj1;
    obj1.setDataX(10).setDataY(20).getDataXY();
    return 0;
}