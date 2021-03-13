
#include<iostream>

using namespace std;

bool isPrime(int m)//This will check whether i is prime or not.
{
    if(m==2)
        return true;
    if(m==3)
        return true;
    if(m%2==0 || m%3==0)
        return false;
    for(int i = 5; i*i <= m; i=i+6)
    {
        if(m%i==0 || m%(i+2)==0)
            return false;
    }
    return true;
}

//Naive Solution
int findPrimeFactors(int n)
{
    for(int i = 2; i <= n; i++)
    {
        if(isPrime(i))
        {
            int x = i;
            while (n%x==0)
            { 
                cout << i << ", ";
                n = n/x;
            }
            
        }
    }
}
//Time Complexity O(n^2.log(n))


//Efficient solution
int findPrimeFactor2(int n)
{
    if(n == 1)
        return false;
    for(int i =2; i*i <= n; i++)
    {
        while (n%i==0)
        {
            cout<< i << " ";
            n = n/i;
        }
        
    }
    if(n>1)
    {
        cout << n << endl;
    }
}


//More efficient solution
int findPrimeFactor3(int n)
{
    if(n == 1)
        return false;
    while (n%2==0)
    {
        cout<< 2 << " ";
        n = n/2;
    }
    while (n%3==0)
    {
        cout<< 3 << " ";
        n = n/3;
    }
    for(int i = 5; i*i <= n; i = i+6)
    {
        while(n%i==0)
        {
            cout << i << " ";
            n = n/i;
        }
        while(n %(i+2)==0)
        {
            cout << i+2 << " ";
            n = n/i+2;
        }
    }
    if(n > 3)//becouse 2 and 3 are already checked so their corrosponding dividers will also be considered there
        cout << n;
}
//Time complexity """"Worst case when the number is prime sp it will take Theta(Root n)"""


int main()
{
    int num;
    cout << "Enter a number to find out it's prime factors." << endl;
    cin >> num;
    //findPrimeFactors(num);
    //findPrimeFactor2(num);
    findPrimeFactor3(num);
    return 0;
}