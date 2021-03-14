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

class Drive: private Base
{
    public:
        int private_var = Base::GetPrivate();
        int GetPrivate_in_drive()
        {
           return Drive::private_var;
        }
        
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
    cout << "Public member of class Base. " << obj1.GetPublic() << endl;
    /*
    cout << "Private member of class Base."  << obj1.GetPrivate() << endl;
    */
    cout << "Private member can't be accessable in Drive class." << endl;
    cout << "Private member of class Base. " << obj1.GetPrivate_in_drive() << endl;
    cout << "Protected member of class Base. " << obj1.GetProtected() << endl;
    
    return 0;
}