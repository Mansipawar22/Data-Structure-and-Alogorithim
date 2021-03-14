#include<iostream>

using namespace std;

int main()
{
    //Defining Enum inside main function
    enum Gender{male, female};

    //Creating Gender type variable
    Gender gender=male;
    //cin >> gender;
    switch (gender)
    {
    case male:
        cout << "Gender is Male" << endl;
        break;
    case female:
        cout << "Gender is Female" << endl;
        break;
    default:
        break;
    }
    return 0;
}