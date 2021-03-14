#include<iostream>

using namespace std;

class Account
{
    public:
        int salary = 60000;

};

class Programmer: public Account
{
    public:
        int bonus = 5000;
    
};


int main()
{
    Programmer obj;
    cout << "A Programmer basic salary with bonus is " << obj.salary + obj.bonus << "rs in india." << endl;
    return 0;
}