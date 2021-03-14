#include<iostream>

using namespace std;

void printFibonacci(int number)
{
    static int n1 = 0, n2 = 1, n3;
    if(number>0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << " " << n3;
        printFibonacci(number-1);
        
    }


} 

int main()
{
    int number;
    cout <<" Enter the Number of the element: ";
    cin >> number;
    cout << "Fibonacci Series: ";
    cout << "0" << " " << "1" ;
    printFibonacci(number-2);
    
    return 0;


}