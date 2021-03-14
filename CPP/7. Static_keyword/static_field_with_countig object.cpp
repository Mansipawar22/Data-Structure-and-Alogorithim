#include<iostream>

using namespace std;


class Employee
{
    public:
    int ID;
    string name;
    static int count;

    Employee(int ID, string name)
    {
        this -> ID = ID;
        this -> name = name;
        count++;
    }

    void Display()
    {
        cout << "Employe name is " << name << "and ID is " << ID << endl;
    }

};

int Employee::count=0;

int main()
{
    
    Employee e1(23,"mansi");
    Employee e2(20,"prashant");
    e1.Display();
    e2.Display();
    cout << "Total object created are: " << Employee::count << endl;
    return 0;
}