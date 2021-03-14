#include<iostream>

using namespace std;


//Base class
class Shape
{
    protected:
        float height;
        float width;

    public:
        //Pure virtual function providing interface framework.
        virtual float getArea() = 0;

        void setWidth()
        {
            cout << "Width: ";
            cin >> width ;
        }

        void setHeight()
        {
            cout << "Height: ";
            cin >> height ;
        }
};

//Derive class
class Rectangle: public Shape
{
    public:
        float getArea()
        {
            return (width*height);
        }
};

//Drive class
class Triangle: public Shape
{
    public:
        float getArea()
        {
            return (width*height)/2;
        }
};

int main()
{
    Rectangle rec;
    Triangle tri;

    cout << "Enter the Height and Width of Rectangle." << endl;
    rec.setHeight();
    rec.setWidth();
    cout << "Area of the Rectangle: " << rec.getArea() << endl;

    cout << "Enter the Height and Width of Triangle." << endl;
    tri.setHeight();
    tri.setWidth();
    cout << "Area of the Triangle: " << tri.getArea() << endl;
    return 0;
}