#include<iostream>
#include<math.h>


using namespace std;

//Naive solution
int findLCM1(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res%a==0 && res%b==0)
        {
            return res;
        }
        res++;
    }
    return res;
}

//Efficient solution

int findGCD(int a, int b)
{
    if(b == 0)
        return a;
    return findGCD(b, a%b);
}

int findLCM2(int a, int b)
{
    return (a*b)/findGCD(a, b);
}

int main(void)
{
    int x, y;
    cout << "Enter two number to find the LCM: " << endl;
    cin >> x;
    cin >> y;
    cout << "LCM of these two number:" << findLCM1(x, y) << endl; 
    cout << "LCM of these two number:" << findLCM2(x, y) << endl; 
    return 0;
}