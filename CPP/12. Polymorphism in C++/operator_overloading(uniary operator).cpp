#include<iostream>

using namespace std;

class Uniary
{
    private:
        int num;

    public:
        Uniary()
        {
            num = 10;
        }

        void operator ++()
        {
            num = num + 2;
        }

        void print()
        {
            cout << "The Count is " << num << "." << endl;
        }
};


int main()
{
    Uniary obj1;
    obj1.print();
    obj1.operator++();
    obj1.print();
    return 0;
}
