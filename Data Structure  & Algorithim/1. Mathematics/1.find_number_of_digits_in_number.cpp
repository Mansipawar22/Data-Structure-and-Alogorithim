//Finding the number of Digits in a number.

#include<iostream>
#include<math.h>

using namespace std;



//Interation method.
int CountDigitsInterationMethod(long n)
{
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        ++count;
    }
    return count;
}

//Recursive Solution
int CountDigitsRecursiveMethod(long n)
{
    int count = 0;
    if(n==0)
    {
        return 0;
    }
    return 1 + CountDigitsInterationMethod(n/10);
}

//Logarithim solution
int CountDigitsLogarithimMethod(long n)
{
    return floor(log10(n) + 1);
}

int main()
{
    long number;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Number of Digits in a number is " << CountDigitsInterationMethod(number) << "." << endl ;
    cout << "Number of Digits in a number is " << CountDigitsRecursiveMethod(number) << "." << endl ;
    cout << "Number of Digits in a number is " << CountDigitsLogarithimMethod(number) << "." << endl ;
    return 0;
}