// Use of scope resolution class inside another class. 
#include<iostream> 
using namespace std; 

class outside 
{ 
public: 
	int x; 
    outside()
    {
        cout << "outside constructor called" << endl;
    }
	class inside 
	{ 
	public: 
			int x; 
			static int y; 
            inside()
            {
                cout << "inside constructor called" << endl;
                cout << y << endl;
            }
			int foo(); 

	}; 
}; 
int outside::inside::y = 5; 

int main(){ 
	outside A; 
	outside::inside B; 

} 


