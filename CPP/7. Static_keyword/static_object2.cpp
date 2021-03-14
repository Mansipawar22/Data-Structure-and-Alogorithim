#include<iostream>

using namespace std;

class Demo
{
    int i;
    public:
    Demo()
    {
        i=0;
        cout << "Inside Constructor" << endl;
    }
    ~Demo()
    {
        cout << "Inside Destructor" << endl;
    }

    void xyz()
    {
        cout << i+1 <<endl;
    }
};

int main()
{
    int x=0;
    if (x==0)
    {
        static Demo obj1;
        Demo obj2;
        obj1.xyz();
        obj2.xyz();
    }
    cout << "End of main" << endl;
    //obj.xyz();
    return 0;
}