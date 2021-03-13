#include<iostream>


using namespace std;

//Interation method
int Series1(int n)
{
    int a = 0;
    int d = 2;
    for(int i = 1 ; i <= n; i++)
    {
        cout << a + i*d << " " ;
    }
} 




int main()
{
    int number;
    cout << "Enter the number you want to print. ";
    cin >> number ;
    Series1(number);
    return 0;
}