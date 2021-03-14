#include<iostream>


using namespace std;

int main()
{
    int number;
    bool flag = true;
    cout << "Enter a number to check: ";
    cin >> number;
    if(number > 2)
    {
        for(int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                flag = false;
                break;
            }
            
        }        

    }
    if(flag == true)
    {
        cout<<number<<" is a prime number.";
    }
    else{
        cout<<number<<" is not a prime number.";
    }
        
    return 0;
}