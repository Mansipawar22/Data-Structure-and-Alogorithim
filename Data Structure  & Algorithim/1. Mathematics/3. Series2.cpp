//This program will print the series like.
// 2 4 8 16 32 64 128 256 .............2*2^n
//where 
// a = 2;
// r = 2;
// n = term in series
// In genral
// (a.r^0 + a.r^1 + a.r^2 + a.r^3 + a.r^4 + a.r^5 + a.r^6 +.............a.r^n).

#include<iostream>


using namespace std;


int PrintSeries(int a, int n)
{
    int r = a;
    int temp = a;
    cout << a << " " ; 
    for(int i = 1; i <= n; i++)
    {
        temp = temp*r;
        cout << temp << " " ;
    }
}


int main()
{
    int a;
    int number;
    cout << "Enter a number of series. ";
    cin >> a;
    cout << "How much term you want to print in the series: ";
    cin >> number;
    PrintSeries(a, number);
    return 0;
}