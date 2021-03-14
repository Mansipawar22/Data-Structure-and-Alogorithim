#include<iostream>

using namespace std;

class Student
{
    public:
    //int rollno;
    string name;
    int salary;

    void insert(string n, int s)
    {
        name = n;
        salary = s;
    }
    void display()
    {
        cout << "Name: " << name << endl << "Salary: " << salary ;
    }
};





int main()
{
    Student s1;
    s1.insert("Prashant Panwar", 40000);
    s1.display();
    return 0;
}