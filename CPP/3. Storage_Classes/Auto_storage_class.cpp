#include<iostream>
using namespace std;


int auto_function(){
    // Declairing Auto variable in the function.
    auto x = 3;
    auto y = 3.14;
    auto z = "Hello World";
    auto p = true;


    // Printing Auto variable

    cout <<"X :"<< x << endl;
    cout <<"Y :"<< y << endl;
    cout <<"Z :"<< z << endl;
    cout <<"P :"<< p << endl;

    return 0;
}


int main(){
    auto_function();
    return 0;
}