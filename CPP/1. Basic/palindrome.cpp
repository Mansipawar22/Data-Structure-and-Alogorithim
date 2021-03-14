#include<iostream>

using namespace std;


int main()
{
    int num;
    int temp1, temp2;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp1 = num;

    while ( num > 0 )
    {
        temp2 = num % 10;
        sum = (sum * 10) + temp2;
        num = num / 10;
    }

    if(temp1 == sum)
    {
        cout << "Number is Palindeome.";

    }
    else
    {
        cout << "Number is not Palindeome.";
    }

return 0;

}