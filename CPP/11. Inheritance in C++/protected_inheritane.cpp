#include<iostream>

using namespace std;

class Base
{
    public:
        int pub = 101;

    private:
        int priv = 202;

    protected:
        int pro = 303;

    public:
        //function to access private memeber.
        int GetPrivate()
        {
            return Base::priv;
        }
};

class Drive: protected Base
{
    public:
        //function to get protected member.
        int GetProtected()
        {
            return Base::pro;
        }

        //function to get public member/
        int GetPublic()
        {
            //cout << Base::pub;
            return Base::pub;
        }

};





int main()
{
    Drive obj1;
    cout<< "Public member of class Base. " << obj1.GetPublic() << endl;
    /*
    this line of code will give us the compile time error
    "protected_inheritane.cpp:50:64: error: 'Base' is not an accessible base of 'Drive'
    cout<< "Private member of class Base. " << obj1.GetPrivate() << endl;"
    cout<< "Private member of class Base. " << obj1.GetPrivate() << endl;
    */
    cout << "Private member can't be accessable in Drive class." << endl;
    cout<< "Protected member of class Base. " << obj1.GetProtected() << endl;
    /*
    Error: member "Base::pub" is inaccessible
    cout << "Public = " << object1.pub;
    */
    return 0;
}