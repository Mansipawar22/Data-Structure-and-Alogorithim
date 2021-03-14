#include<iostream>


using namespace std;


void swap(int x, int y){
    int temp;
    temp = x;
    x =  y;
    y = temp;
    cout << "After swaping within function:" << x << " " << y << endl;
    return;
}


int main(){

    int a,b;

    cout << "Enter the Value of 'a' and 'b':";
    cin >> a;
    cin >> b;

    cout << "Swaping before the function called: " << a << " " << b << endl;
    swap(a, b);
    cout << "Swaping after the function called: " << a << " " << b << endl;

    return  0;

}