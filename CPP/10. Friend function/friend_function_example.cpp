#include<iostream>
using namespace std;
class Box
{
private:
    /* data */
    int lenght;
public:
    Box()
    { 
        lenght=0;
    }
    friend int printlength(Box);//friend Function
};
int printlength(Box b)
{
    b.lenght += 10;
    return b.lenght;
}

int main()
{
    Box b;
    cout << "Lenght of the Box is :" << printlength(b) << endl;
    return 0;
}