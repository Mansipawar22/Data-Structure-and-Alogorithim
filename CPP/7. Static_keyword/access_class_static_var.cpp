// C++ program to show that :: can be used to access static 
// members when there is a local variable with same name
#include<iostream>

using namespace std;

class Demo
{
    public:
    static int x;
    static int y;
    void Display(int x)
    {
        // Local parameter 'a' hides class member 
        // 'a', but we can access it using ::
        cout << "Static Variable: " << Demo::x << endl;

        // We can access class's static variable 
       // even if there is a local variable
        cout << "Local Variable: " << x << endl;
    }
};

// In C++, static members must be explicitly defined  
// like this 
int Demo::x = 1;
int Demo::y = 2;


int main()
{
    int x = 3;
    Demo obj1;
    obj1.Display(x);
    cout << "Demo::y = " << Demo::y << endl;
    return 0;
}