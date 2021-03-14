#include<iostream>

using namespace std;

class A
{
    public:
        int a;
};

class B: public A
{
    public:
        int b;
};

class C: public A
{
    public:
        int c;
};

class D: public B, public C
{
    public:
        int d;
};


int main()
{
    D obj;
    //obj.a = 10;                   //Statement 1, Error 
    //obj.a = 100;                 //Statement 2, Error 

    obj.B::a = 10;
    obj.C::a = 100;

    obj.b = 200;
    obj.c = 300;
    obj.d = 400;

    cout<< "\n A from ClassB  : "<< obj.B::a; 
    cout<< "\n A from ClassC  : "<< obj.C::a; 
  
    cout<< "\n B : "<< obj.b; 
    cout<< "\n C : "<< obj.c; 
    cout<< "\n D : "<< obj.d; 

    return 0;
}