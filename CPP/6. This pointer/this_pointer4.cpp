#include<iostream>

using namespace std;


class Test
{
    private:
    int x;
    public:
    //int x;
    Test(int x = 0)
    {
        this -> x = x;
    }
    void display()
    {
        cout << x << endl;
    }
};


int main()
{
    Test obj1(1);
    obj1.display();
    return 0;
}