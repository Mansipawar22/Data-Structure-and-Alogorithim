#include<iostream>

using namespace std;


//Naive Solution
int isPrime(int n)
{
    if(n == 1)
    
        cout << 1;
    if(n == 2)
        cout << 1 << ", " << 2 ;
    if(n == 3)
        cout << 1 << ", " << 3;
    if(n%2 == 0 || n%3==0)
        return false;
    for(int i = 5; i*i <= n; i = i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    cout << 1 << ", " << n ;
    return true;
}
int findAllDivisor1(int n)
{
    if(isPrime(n))
        return 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
            cout << i << ", ";
    }
}//Time complexity Theta(n)  Theta(1) space.

//Efficient Soltion
int findAllDivisor2(int n)
{
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0)
        {
            cout << i << ", ";
            if(i != n/i)
            {
                cout << n/i << ", ";
            }
        }
    }  
}//Time Colpexity will be O(_/n)


//More Efficeint solution which print Divivsors in propre order
int findAllDivisor3(int n)
{
    int i;
    for(i = 1; i*i<n; i++)
    {
        if (n%i==0)
        {
            /* code */
            cout << i << ", ";
        }
    }
    for( ;i>=1; i--)
    {
        if (n%i == 0)
        {
            /* code */
            cout << n/i << ", ";
        }
        
    }
}



int main()
{
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    //isPrime(num);
    findAllDivisor3(num);
    return 0;
}