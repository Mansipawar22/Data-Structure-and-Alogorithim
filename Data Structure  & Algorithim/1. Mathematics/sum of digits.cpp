#include<iostream>

using namespace std;


int main()
{
    int t,i;
    long int sum, x, y, num;

    cout << "Enter number of test cases. ";
    cin >> t;
    {
        cin >> num;
        sum = 0;
        while (num > 0)
        {
            x = num%10;
            sum = sum + x;
            num = num/10; 
        }
        cout << sum << endl;
    }
    return 0;
}   