#include<iostream>

using namespace std;

class Student
{
    public:
    int id;
    string name;
};

int main()
{
    Student s1;
    cout << "Enter your Rollno: ";
    cin >> s1.id;

    cout << "Enter your Name: ";
    getline (cin, s1.name);
    cout << endl;

    cout << "Name: " << s1.name << endl;
    cout << sizeof(s1.name);
    cout << "Rollno:" << s1.id << endl;
    return 0;
}