//This Program will print the roots of Quadratic equation
//Gernal equation ax^2 +bx + c. 
#include<iostream>
#include<math.h>

using namespace std;

int FindRoot(int a, int b, int c)
{
    //IF a is 0 then the equation is not Quadratic, but Linear
    if(a==0)
    {
        cout << "Invalid" << endl;
        return 0;
    }
    int d = b * b - 4 * a * c;
    double sqrt_d = sqrt(abs(d));

    if (d > 0)
    {
        cout << "Roots are real and differnet" << endl;
        cout << ( double )( - b + sqrt_d ) / ( 2 * a ) << endl << ( double )( - b - sqrt_d ) / ( 2 * a ) ; 
    }
    else if (d == 0)
    {
        cout << "Roots are real and same" << endl;
        cout << -( double )b / ( 2 * a ) << endl;
    }
    else // d < 0
    {
        cout << "Roots are complex." << endl;
        cout << -( double )b / ( 2 * a ) << " + i" << sqrt_d << -( double )b / ( 2 * a ) << " - i" << sqrt_d ;
    }  
}


int main()
{
    int a ;
    int b ;
    int c ;

    cout << "Enter the value of relate constant." << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    

    //function calling
    FindRoot(a, b, c);
    return 0;
}