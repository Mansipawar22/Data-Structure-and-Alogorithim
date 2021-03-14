#include<iostream> 
using namespace std; 

class Test 
{ 
    private:
    int x; 
    public: 
    Test(int x = 0)
    {
        this->x = x;
        //cout << x << endl;
    } 
    void change(Test *t)
    {
        this->x = t->x;
    } 
    void print()
    {
        cout << "x = " << x << endl;
    } 
}; 

int main() 
{ 
    Test obj(5); 
    Test *ptr = new Test (20); 
    obj.change(ptr); 
    obj.print(); 
    return 0; 
} 
