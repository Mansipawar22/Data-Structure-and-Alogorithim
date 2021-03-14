#include<iostream>

using namespace std;

class Addition
{
    public:

        int addition(int x, int y)
        {
            int temp;
            temp = x + y;
            return temp;
        }

        int addition(int x, int y, int z)
        {
            int temp;
            temp = x + y + z;
            return temp;
        }

        int addition(int x, int y, int z, int w)
        {
            int temp;
            temp = x + y + z + w;
            return temp;
        }
};

int main()
{
    Addition obj1;
    cout << "Example of adding two number: " << obj1.addition(10, 20) << endl;
    cout << "Example of adding three number: " << obj1.addition(10, 20, 30) << endl;
    cout << "Example of adding four number: " << obj1.addition(10, 20, 30, 40) << endl;
    return 0;
}