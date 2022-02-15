#include<iostream>

using namespace std;


// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n-1);
// }


// bool ispalidrom(long n)
// {
//     long rev=0;
//     long temp = n;

//     while (temp != 0)
//     {
//         rev = rev * 10 + temp%10;
//         temp = temp/10;
//     }
//     cout << rev <<endl;
//     return(rev==n);
// }

//check for prime no

bool isprime(int n)
{
    if(n==1)
        return false;

    if(n==2 || n==3)
        return false;

    if( n%2==0 || n%3==0 )
    {
        return false;
    } 

    for (int i = 5; i*i <= n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    long num;
    cout << "Enter a number:";
    cin >> num;
    cout << isprime(num);
    return 0;
}