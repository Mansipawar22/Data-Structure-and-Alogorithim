#include<iostream>

using namespace std;


class Box
{
    public:
    static int object_counter;
    Box(double l, double b, double h)
    {
        Length = l;
        Width = b;
        Height = h;

        object_counter++;
    }

    double Volumn()
    {
        return Length*Width*Height;
    }

     static int getCount() {
         return object_counter;
      }

    private:
    double Length;
    double Width;
    double Height;

};

int Box::object_counter = 0;


int main()
{
    
    cout << "Initialized object Counter:" << Box::getCount() << endl;
    Box b1(2.0, 2.0, 2.0);
    Box b2(2.0, 2.0, 2.0);
    Box b3(2.0, 2.0, 2.0);
    Box b4(2.0, 2.0, 2.0);
    Box b5(2.0, 2.0, 2.0);
    cout << "Volume of the Box is:" << b1.Volumn() << endl;
    cout << "At the end object Counter:" << Box::getCount() << endl;
    return 0;
}