#include<iostream>

using namespace std;

class Employ
{
    public:
    Employ()
    {
        cout << "I am Default constractor;" << endl;
    }
};

int main()
{
    Employ e1;
    return 0;
}