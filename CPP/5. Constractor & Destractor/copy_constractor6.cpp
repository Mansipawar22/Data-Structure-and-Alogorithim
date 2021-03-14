#include <iostream>
using namespace std;
 
class Point
{
    int x, y;
public:
    Point(int a, int b)
    {
         x = a; y = b; 
    }
    
    Point(Point &p)
    {
        x = p.x; y = p.y;
    }
    
    int getX(){
         return x;
         }
    int getY(){
         return y;
         }
};
 
int main()
{
    Point p1(10, 20);
    Point p2(p1);
    cout << "x = " << p2.getX() << " y = " << p2.getY();
    return 0;
}