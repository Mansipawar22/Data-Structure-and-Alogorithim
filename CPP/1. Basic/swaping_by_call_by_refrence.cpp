#include<iostream>

using namespace std;


void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << x << " " << y;
}



int main(){
    int a,b;
    cout << "Enter the Value of 'a' and 'b':";
    cin >> a;
    cin >> b;
    cout << "Value before the funtion exicuted: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "Value after the funtion exicuted: " << a << " " << b << endl;
    return 0;
}