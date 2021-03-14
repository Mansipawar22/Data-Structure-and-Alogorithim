#include<iostream>

using namespace std;

//declairing extern variacle
int x = 10;

int Extern_function1(){

    cout << "Demostrating Extern variable:" << endl;
    extern int x;
    cout << "Value of X for the first time:" << x << endl;

    x = 5;
    cout << "Value of X for the Second time:" << x << endl;

    return 0;
}

int Extern_function2(){

    cout << "Demostrating Extern variable:" << endl;
    extern int x;
    cout << "Value of X for the first time:" << x << endl;

    x = 15;
    cout << "Value of X for the Second time:" << x << endl;

    return 0;
}

int main(){
    Extern_function1();
    Extern_function2();
    return 0;
}