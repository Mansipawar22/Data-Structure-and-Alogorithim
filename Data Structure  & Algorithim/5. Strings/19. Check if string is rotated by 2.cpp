#include<bits/stdc++.h>


using namespace std;

bool is_rotation_two(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    string temp = s1 + s1;
    //cout << temp << endl;
    int index  = temp.find(s2);
    if(index == 2)
    {
        return true;
    }
    return false;
}

int main()
{
    string s1;
    string s2;
    cout << "Enter s1:";
    cin >> s1;
    cout << "Enter s2:";
    cin >> s2;
    cout << is_rotation_two(s1, s2);
    return 0;
}