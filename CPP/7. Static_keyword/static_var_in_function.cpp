#include<iostream>
using namespace std;


void Demo()
{
    static int count = 0;
    cout << count << endl;
    count++;
    cout << count << endl;
}


int main()
{
    //for(int i = 0; i < 5; i++)
    Demo();
    cout << "semcond time" << endl;
    Demo();
    return 0;
}