#include<iostream>

using namespace std;

class Vehicle
{
    public:
        int load;
        int fual;
        int brk;
    
    public:
        void LoadCapacity();
        void FualCapacity();
        void BreakTime();
};

class Bus: public Vehicle
{
    public:
        void LoadCapacity()
        {
            cout << "Load capacity of Bus: ";
            cin >> load ;
        }
        void FualCapacity()
        {
            cout << "Fual Capacity of Bus: ";
            cin >> fual ;
        }

        void BreakTime()
        {
            cout << "Breal interval of Bus:";
            cin >> brk;
        }
        void DisplayBusInformation()
        {
            cout << "Information of Bus are:" << endl;
            cout << "Load:" << load << "Kg." << endl;
            cout << "Fual:" << fual << "litre." << endl;
            cout << "Break:" << brk << "Sec." << endl;
        }
};



class Car: public Vehicle
{
     public:
        void LoadCapacity()
        {
            cout << "Load capacity of Car: ";
            cin >> load ;
        }
        void FualCapacity()
        {
            cout << "Fual Capacity of Car: ";
            cin >> fual ;
        }

        void BreakTime()
        {
            cout << "Breal interval of Car:";
            cin >> brk;
        }
        void DisplayCarInformation()
        {
            cout << "Information of Car are:" << endl;
            cout << "Load:" << load << "Kg." << endl;
            cout << "Fual:" << fual << "litre." << endl;
            cout << "Break:" << brk << "Sec." << endl;
        }
};



int main()
{
    Bus bus1;
    Car car1;
    bus1.LoadCapacity();
    car1.LoadCapacity();
    bus1.FualCapacity();
    car1.FualCapacity();
    bus1.BreakTime();
    car1.BreakTime();
    bus1.DisplayBusInformation();
    car1.DisplayCarInformation();
    return 0;
}