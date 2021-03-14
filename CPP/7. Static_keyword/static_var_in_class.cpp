#include<iostream>

using namespace std;

class Demo
{
    public:
    static int i;
    Demo()
    {
        //Do nothing
    }
};

    int Demo::i = 0;


int main()
{
    Demo obj1;
    Demo obj2;
    Demo obj3;
    obj1.i = 1;
    obj2.i = 2;
    obj3.i = 3;

    cout << obj1.i << " " << obj2.i << endl;

    return 0;
}