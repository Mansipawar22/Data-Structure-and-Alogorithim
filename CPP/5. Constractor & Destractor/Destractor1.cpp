//Example of Destractor
#include<iostream>

using namespace std;

 class Student
 {
     public:
     Student()
     {
         cout << "Constructor Invoked!" << endl;
     }

     ~Student()
     {
         cout << "Destructor Invoked!" << endl;
     }

     void Display()
     {
         cout << "Display Function Invoked!" << endl;
     }
 };



int main()
{
    Student obj1;
    obj1.Display();
    return 0;
}