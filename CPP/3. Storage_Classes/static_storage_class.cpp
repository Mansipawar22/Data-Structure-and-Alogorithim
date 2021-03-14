#include<iostream>

using namespace std;

static int x = 0;
int static_func(){
     
    x++;
    return x;
}

int None_static_func(){
     
    x++;
    return x;
}


int main(){
    //For Static variable
    cout<< "First time static variable:" << static_func() << endl;
    cout<< "Second time static variable:" << static_func() << endl;

    //For None Static variable
    cout<< "First time none static variable:" << None_static_func() << endl;
    cout<< "Second time none static variable:" << None_static_func() << endl;

    return 0;
}