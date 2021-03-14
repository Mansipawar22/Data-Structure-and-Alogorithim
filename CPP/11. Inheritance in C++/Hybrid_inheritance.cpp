#include<iostream>

using namespace std;

class Vehicle
{
    public:
        void Personalvehicle()
        {
            cout << "This is a Personal Vehicle." << endl;
        }
        void Publicvehicle()
        {
            cout << "This is a Public Vehicle." << endl;
        }
};


class Fare
{
    public:
        void fare()
        {
            cout << "This Vehicle will charge you fare for it's service." << endl;
        }
};

class Car: public Vehicle
{
    public:
        void car()
        {
            cout << "Car will not carge fare cuz," << endl;
        }
};

class Bus: public Vehicle, public Fare
{
    public:
        void bus()
        {
            cout << "This is Bus a public Transport." << endl;
        }
};

int main()
{
    Car c1;
    Bus b1;
    c1.car();
    c1.Personalvehicle();
    b1.bus();
    b1.Publicvehicle();
    b1.fare();
    return 0;
}