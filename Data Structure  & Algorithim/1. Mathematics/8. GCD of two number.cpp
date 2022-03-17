#include<iostream>
#include<cmath>

using namespace std;

//my approuch 
int findGCD1(int a, int b)
{
    int m;
    m = min(a, b);

    int res;
    for(int i = m; i >= 1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            res = i;
            break;
        }
        
    }
    return res;
}

// Naive solution
int findGCD2(int a, int b)
{
    int res = min(a , b);
    while (res > 0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}

//Euclidean Algorithim better algorithim then Naive.
int findGCD3(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return findGCD3(b, a%b);
    }
    
}


int main()
{
    int x,y;
    cout << "Enter two digits;" << endl;
    cin >> x;
    cin >> y;
    cout << "1. GCD of these two number is :" << findGCD1(x,y) << endl;
    cout << "2. GCD of these two number is :" << findGCD2(x,y) << endl;
    cout << "3. 00GCD of these two number is :" << findGCD3(x,y) << endl;
    return 0;
}