#include<iostream>

using namespace std;


//
int squareroot(int num)
{
    int low = 1;
    int high = num;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low+high)/2;
        int msq  = mid * mid;
        if (msq == num)
        {
            return mid;
        }
        else if(msq > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a number to find Square Root: ";
    cin >> num;
    cout << squareroot(num);
    return 0;
}