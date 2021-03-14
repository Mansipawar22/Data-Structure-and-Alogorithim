#include<iostream>


using namespace std;

class demo
{
    public:
    int a;
};


struct demo2:demo
{

};


int main()
{
    demo2 de;
    de.a=10;
    cout << de.a << endl;
    return 0;
}