#include<iostream>

using namespace std;

//My solution
bool findPrime1(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
//Time complexity of this Solution is O(n) BigO of n.

//Efficient Solution
bool findPrime2(int n)
{
    if(n==1)
        return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
//Time complexity of this Efficient /solution is O(./n) BigO of Root n.


//More Efficient Solution
bool findPrime3(int n)
{
    if(n<=1)
    {
        return false;
    }
    if(n<=3)//Checking for n= 2 & 3
    {
        return true;
    }

    if(n%2==0 || n%3==0)//Checking for all the Values which are divisble by 2 & 3
    {
        return false;
    }

    for(int i = 5; i*i <= n; i = i+6)//Checking that do number have the factor in the form of 6K+-1, if number have the factor then not a prime number
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
//Time complexity of this More Efficient Solution is O(./n) BigO of Root n. But this solution reduce iteration 3 times compare to efficient soltion.

int main(void)
{
    int num;
    cout <<"Enter a number to check whether a number is prime or not:" << endl;
    cin >> num;
    cout << findPrime1(num);
    cout << findPrime2(num);
    cout << findPrime3(num);
    return 0;
}