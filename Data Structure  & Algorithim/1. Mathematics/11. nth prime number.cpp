#include<bits/stdc++.h>

using namespace std;


bool isprime(int num)
{
    if(num == 2)
    {
        return true;
    }

    for (int i = 2; i < num; i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int Nth_prime_number(int n)
{
    int count = 0;
    int num = 2;
    while(count != n)
    {
        if(isprime(num))
        {
            count += 1;
        }
        if(count != n)
        {
            num++;
        }
    }
    
    return num;
}


int main()
{
    int n;
    cout << "Enter the nth position: ";
    cin >> n;
    cout << "Nth prime number is: " << Nth_prime_number(n) << endl;
    return 0;
}