// C++ program to illurtrate Map container

#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    // empty map container
    map <int, int> mp;
    // Insert elements in a random order
    // First element of the pair is key
    // Second element of the pair is the value
    mp.insert(pair<int, int>(1,10));
    mp.insert(pair<int, int>(5,50));
    mp.insert(pair<int, int>(9,90));
    mp.insert(pair<int, int>(2,20));
    mp.insert(pair<int, int>(3,30));
    mp.insert(pair<int, int>(7,70));
    mp.insert(pair<int, int>(6,60));
    mp.insert(pair<int, int>(8,80));
    mp.insert(pair<int, int>(4,40));
    mp.insert(pair<int, int>(10,100));

    // printing map map
    map <int, int> :: iterator itr;
    cout << "The map mp is:\n";
    cout << "KEY\tELEMENT\n";
    for(itr = mp.begin(); itr != mp.end(); ++itr)
    {
        cout << itr->first << "\t" << itr->second << endl;
    }
    return 0;
}