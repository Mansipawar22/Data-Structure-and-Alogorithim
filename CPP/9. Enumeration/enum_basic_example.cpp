#include<iostream>

using namespace std;

enum Weekdays {
    Monday,
    Tuesday,
    Wednessday,
    Thusday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Weekdays name;
    name = Sunday;
    cout << "Weekdays names :" << name << endl;
    return 0;
}