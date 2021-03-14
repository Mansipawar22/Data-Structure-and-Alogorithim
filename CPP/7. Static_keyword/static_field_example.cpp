#include<iostream>

using namespace std;

class Employee
{
    public:
    int acc_no;
    string name;
    static float interest_rate;

    Employee(int acc_no, string name)
    {
        this -> acc_no = acc_no;
        this -> name = name;
        interest_rate = 6.5;
    }

    void Information()
    {
        cout << acc_no << " " << name << " " << interest_rate << endl;
    }


};

float Employee::interest_rate = 0;

int main()
{
    Employee e1(200, "Prashant");
    Employee e2(199, "Mansi");
    e1.Information();
    e2.Information();
    cout << Employee::interest_rate << endl;
    return 0;
}