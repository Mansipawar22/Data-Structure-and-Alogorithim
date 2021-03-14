//Write a program to print the list of Student details with the help of OOPS cpncepts and constractor!


#include<iostream>
#include<string>

using namespace std;

class Eight_standard
{
     int rollno;
    string name;
    public:
             void getname()
            {
                cin >> name;
            }
            void getrollno()
            {
                cin >> rollno;
            }
            void getInfo()
            {
                cout << "Name: " <<name << endl << "Rollno: " << rollno << endl;
            }
};



int main()
{
    int number_of_student;
    cout << "Enter number of Student in class 8th: ";
    cin >> number_of_student;
    Eight_standard s[number_of_student];
    
    for(int i = 0; i < number_of_student; i++)
        {
            cout << "Enter name: " << endl;
            s[i].getname();
            cout << "Enter rollno: "<< endl;
            s[i].getrollno();
        }
    for(int i = 0; i < number_of_student; i++)
        {
            s[i].getInfo();
        }
    return 0;
}