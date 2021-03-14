#include<iostream>

using namespace std;

class A{
    int a;
    public:
    
    void setData(int a)
    {
        /*this is a keyword which is a pointer which point to 
        the object which invokes the member function.*/
        
        /* first try with a = a 
           it will return a garbage value */

        /* Second try with this -> a = a 
           it will return a true value */

        //b = a;

        this -> a = a;
       // return b;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    int y;
    a.setData(4);
    a.getData();
    cout << y << endl;
    return 0;
}