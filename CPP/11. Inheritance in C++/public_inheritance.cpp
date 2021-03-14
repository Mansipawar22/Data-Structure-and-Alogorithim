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

class Drive: public Base
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
            return Base::pub;
        }

        //function to get private member.
        /*
        void GetPrivate()
        {
            return Base::priv;
        }
        */
        //if we compile this code we willget cmpile time error
        //cuz we can't access private memeber in drive class.
        //only member function and friend function/friend class can access private member.

};





int main()
{
    Drive obj1;
    cout<< "Public member of class Base. " << obj1.GetPublic() << endl;
    cout<< "Private member of class Base. " << obj1.GetPrivate() << endl;
    cout<< "Protected member of class Base. " << obj1.GetProtected() << endl;
    cout << obj1.pub << endl;
    return 0;
}