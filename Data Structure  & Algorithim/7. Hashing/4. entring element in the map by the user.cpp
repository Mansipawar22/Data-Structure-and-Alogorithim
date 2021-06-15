#include<iostream>
#include<map>
#include<iterator>

using namespace std;


int main()
{
    int n;
    map <int, int> mp;
    cout << "how many keys you want to enter:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int key;
        int val;
        cout << "Enter " << i+1 << "key:";
        cin >> key;
        cout << "Enter " << i+1 << "value:";
        cin >> val;
        mp.insert({key, val});
    }
    map <int, int> :: iterator itr;
    cout << "The map mp is:\n";
    cout << "KEY\tELEMENT\n";
    for(itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << "\t" << itr->second << endl;
    }
    return 0;
}