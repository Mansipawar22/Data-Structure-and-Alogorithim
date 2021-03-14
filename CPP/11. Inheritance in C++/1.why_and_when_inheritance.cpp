/*Why and when to use inheritance?*/


/*
 Consider a group of vehicles. You need to create classes for Bus,
 Car and Truck. The methods fuelAmount(), capacity(), applyBrakes()
 will be same for all of the three classes.
 If we create these classes avoiding inheritance then we have to write
 all of these functions in each of the three classes
*/

#include<iostream>

using namespace std;

class Vihicle
{
    public:
        void FuelAmount()
        {
            cout << "Fuel ammount is 100 litre." << endl; 
        }

        void capacity()
        {
            cout << "Capacity is 100 tones." << endl;
        }

        void applyBreaks()
        {
            cout << "Apply Breaks for 5 sec." << endl;
        }
};

class Bus: public Vihicle
{

};

class Car: public Vihicle
{

};

class Truck: public Vihicle
{

};



int main()
{
    Bus b1;
    Car c1;
    Truck t1;
    b1.FuelAmount();
    c1.capacity();
    t1.applyBreaks();
    return 0;
}