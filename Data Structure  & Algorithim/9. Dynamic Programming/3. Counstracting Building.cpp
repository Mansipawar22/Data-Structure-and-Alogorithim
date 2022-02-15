#include<bits/stdc++.h>


using namespace std;



int countBuilding(int n)
{
    int ob = 1;
    int os = 1;
    for (int i = 1; i < n; i++)
    {
        int nb = os;
        int ns = os + ob;

        os = ns;
        ob =nb;
    }
    int t_b = os + ob;
    return (t_b * t_b);
}

int fibo2(int n)
{
    int f[n+2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n+1; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    int res = f[n+1] + f[n];
    return (res*res);
}

int main()
{
    int n;
    cin >> n;
    cout << "Total number ofn way to construct Building are:"  << countBuilding(n) << " " << fibo2(n) << endl;
    return 0;

}