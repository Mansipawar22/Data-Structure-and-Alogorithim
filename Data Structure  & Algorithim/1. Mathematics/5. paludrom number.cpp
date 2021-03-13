//This programm will check whether the nuber is paludrom or not.
//for example
//43534 is a paludrom number cuz the reverse of 43534 is same as 43534.
//435643 is not a paludrom number cuz reverse of this number is not same as itself.


#include<iostream>

using namespace std;

bool isPal(long n)
{
    long rev = 0;
    long temp = n;
    while (temp != 0)
    {
        long ld = temp % 10;
        rev = rev*10 + ld;
        temp = temp/10;
    }
    cout << rev << " " << n << endl;
    return (rev == n);
    
}


int main()
{
    long num;
    cout << "Enter a number to check whether a number is paludrom or not: " << endl;
    cin >> num;
    cout << isPal(num);
    return 0;
}