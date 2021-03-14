#include<iostream>

using namespace std;

int main(){
    register int x = 10;
    int* a = &x ;
    cout<< "Register variable:" << x << endl;
    cout<< "Register variable:" << *a << endl;
    cout << "Register variable address: " << a << endl;
     cout << "Register variable address: " << &x << endl;
    return 0;
}