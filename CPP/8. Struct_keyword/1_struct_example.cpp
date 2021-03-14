#include<iostream>

using namespace std;


struct Rectangle
{
    int length;
    int Width;
};


int main()
{
    struct Rectangle rec;
    
    rec.length=4;
    rec.Width=4;
    cout << "Area of Rectangle is: " << rec.length * rec.Width << endl;
    return 0;
}
