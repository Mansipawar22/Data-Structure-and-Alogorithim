#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void area_of_rectangle()
    {
        cout << "Area of Rectangle is :" << length*width << endl;
    }
};

int main()
{
    struct Rectangle rec(10, 10);
    rec.area_of_rectangle();
    return 0;
}