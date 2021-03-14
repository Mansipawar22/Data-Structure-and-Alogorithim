#include<iostream>

using namespace std;

class Demo
{
    public:
    static int var1;
    //int var2 = 20;
    static void Display()
    {
        cout << "This is a Static Function." << endl;
        cout << var1 << endl;
        /*a nonstatic member reference must be relative to a specific object*/
        //cout << var2 << endl;
    }
};

int Demo::var1 = 10;


int main()
{
    Demo::Display();
    return 0;
}