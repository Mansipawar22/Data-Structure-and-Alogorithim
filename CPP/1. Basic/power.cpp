#include<iostream>


using namespace std;

double power(double base, int exp)
{
    double result = 1;
    for ( int i = 1; i <= exp ; i++)
    {
        /* code */
        result = result * base;
    }
    return result;
    
}

void print_power(double base, int exp)
{
    double  final = power(base, exp);
    cout<< base <<" rase to de power "<< exp <<" equal to "<< final <<std::endl;
}

int main()
{
    double base;
    int exp;
    cout <<"Enter the Base Value: ";
    cin >> base;
    cout <<"Enter the exponent: ";
    cin >> exp;
    print_power(base, exp);
}