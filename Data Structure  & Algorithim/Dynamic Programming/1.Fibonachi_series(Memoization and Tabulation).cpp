#include<bits/stdc++.h>



using namespace std;


//Naive Solution O(golden_ration^n)
int fibo(int n)
{
    if(n==0 or n==1)
        return n;
    else{
        return fibo(n-1) + fibo(n-2);
    }
}

//tabulation
int fibo2(int n)
{
    int f[n+2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n+1; i++)
    {
        f[i] = f[i-1] + f[i-2];
        // cout << f[i] << " ";
    }
    return f[n+1];
}

int main()
{
    int n;
    cin >> n;
    cout << fibo2(n);
    return 0;
}