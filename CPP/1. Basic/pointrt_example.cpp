#include<iostream>


using namespace std;


int main(){

    int num = 10;
    int * p;
    p = &num;
    cout<<"Address of 'num':"<< &num << endl;
    cout<<"Address of 'num':"<< p << endl;
    cout<<"Address of 'num':"<< &*p << endl;
    cout<<"Value of 'num':"<< num << endl;
    cout<<"Value of 'num':"<< *p << endl;
    cout<<"Value of 'num':"<< *&num << endl;

}