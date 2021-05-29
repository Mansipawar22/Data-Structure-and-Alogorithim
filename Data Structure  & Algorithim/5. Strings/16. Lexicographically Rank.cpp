#include<bits/stdc++.h>

const int CHAR = 256;

using namespace std;

int factorial(int n)
{
    //Recursive method
    if (n==0)
    {
        return 1;
    }
    return n * factorial(n-1);   
}

int lexicographical_rank(string &str)
{
    int res = 1;
    int n =  str.length();
    int mul = factorial(n);
    cout << mul << endl;
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i]]++;
    }
    for (int i = 1; i < CHAR; i++)
    {
        count[i] += count[i-1];
    }
    for (int i = 0; i < n-1; i++)
    {
        mul = mul/(n-i);
        res = res + count[str[i]-1] * mul;
        for (int j = str[i]; j < CHAR; j++)
        {
            count[j]--;
        }
    }
    return res;    
}



int main()
{
    string str = "DCBA";
    cout << lexicographical_rank(str);
    return 0;
}