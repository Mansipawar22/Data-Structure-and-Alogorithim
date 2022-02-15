#include<bits/stdc++.h>



using namespace std;

//Efficient Solution
//O(n) T(n)
//O(n) T(n)
int countString(int n)
{
    int dp0[n], dp1[n];
    dp0[0] = 1;
    dp1[0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp1[i] = dp0[i-1] + dp1[i-1];
        dp0[i] = dp1[i-1];
    }
    return (dp1[n-1] + dp0[n-1]);
}


//More effifient Solution
int countString2(int n)
{
    int o_c_zero = 1;
    int o_c_one = 1;
    for (int i = 1; i < n; i++)
    {
        int n_c_zero = o_c_one;
        int n_c_one = o_c_zero + o_c_one;
        o_c_one = n_c_one;
        o_c_zero = n_c_zero;
    }
    return o_c_one + o_c_zero;
}

int main()
{
    int n;
    cin >> n;
    cout << countString(n) << endl;
    cout << countString2(n) << endl;

    return 0;
}