// CPP program within virtual destructor
#include<iostream>

using namespace std;

class Base
{
    public:
    Base()
    {
        cout << "Constructor Base!" << endl;
    }

    virtual ~Base()
    {
        cout << "Destructor Base!" << endl;
    }
};

class Drived: public Base
{
    public:
    Drived()
    {
        cout << "Constructor Drive!" << endl;
    }
    ~Drived()
    {
        cout << "DEstructor Drived!" << endl;
    }

};



int main()
{
    Drived *obj1 = new Drived();
    Base *obj2 = obj1;
    delete obj2; 
    return 0;
}