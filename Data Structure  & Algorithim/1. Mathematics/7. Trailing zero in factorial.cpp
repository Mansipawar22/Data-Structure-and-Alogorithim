/*
This program will check Trailing zero in factorial of the number.
for example:
5! = 120 then output = 1
10! = 3628800 then output = 2
100! output = 24
*/


#include<iostream>


using namespace std;

//Interation method
int countZero1(long n)
{
    long fact = 1;
    for(int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    int result = 0;
    while (fact % 10 == 0)
    {
        result++;
        fact = fact/10;
    }
    return result;
}

//Recursive method
int countZero2(int n)
{
    int res = 0;
    for(int i = 5; i <= n; i = i*5)
    {
      res = res + n/i;  
    }
    return res;
}


int main()
{
    long num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Zero's :" << countZero2(num) << endl;
    return 0;
}