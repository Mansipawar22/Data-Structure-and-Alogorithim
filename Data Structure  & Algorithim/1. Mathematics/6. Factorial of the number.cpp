//This program will print the factoril of the number
//Approchs
//1. Interation
//Time complexity will be Theta(n).
//space complexity 'Constant' BigO(1)
//2. Recursion

#include<iostream>

using namespace std;

//Iteration method
int factorial_by_iteration(int n)
{
    int result = 1;
    for(int i = 2; i<=n ; i++)
    {
        result = result * i;
    }
    return result;
}

//Recursive method
int factorial_by_recursion(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n * factorial_by_recursion(n-1);   
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin  >> num;
    cout << "factorial of number " << num << " is :" << factorial_by_iteration(num) << endl;
    cout << "factorial of number " << num << " is :" << factorial_by_recursion(num) << endl; 
    return 0;
}