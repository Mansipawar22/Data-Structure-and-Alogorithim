#include<iostream>


using namespace std;

class Test
{
public:
    int x ;
    mutable int y ;

    Test()
    {
        x = 5;
        y = 20;
    }
    
};


int main(){

    const Test t1;

    cout << "Actual value of X:" << t1.x << endl;
    cout << "Actual value of Y:" << t1.y << endl;

    //t1.x = 10;
    t1.y = 25;

    cout << "Actual value of X:" << t1.x << endl;
    cout << "Actual value of Y:" << t1.y << endl;


    return 0;
}