#include<iostream>

using namespace std;

class Student
{
    public:
    int rollno;
    string name;
    int age;
    Student()
    {
        rollno = 30;
        name = "Mick";
        age = 20;
        //cout << rollno << " " << name << " " << age << endl;
    }
    Student(int i, string n, int a)
    {
        rollno = i;
        name = n;
        age = a;
    }

    void Details()
    {
        cout << rollno << " " << name << " " << age << endl;
    } 
};

int main()
{
    Student s1(39,"Prashant",20);
    Student s2;
    s1.Details();
    s2.Details();
    return 0;
}