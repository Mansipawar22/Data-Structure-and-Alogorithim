#include<iostream>

using namespace std;

class copy_constractor
{
    public:
    int x;
    int y;
    copy_constractor(int a)
    {
        x = a;
        y = a + 10;
        //return x;
    }

    copy_constractor( copy_constractor &i)
    {
        i.x++;
        //i.y++;
        x = i.x;
        y = i.y;
        //return x;
    }
};

int main()
{
    copy_constractor obj1(20);
    copy_constractor obj2(obj1);
    cout << obj1.x << endl;
    cout << obj1.y << endl;
    cout << obj2.x << endl;
    cout << obj2.y << endl;
    return 0;
}
