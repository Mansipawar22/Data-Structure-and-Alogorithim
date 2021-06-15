#include<iostream>
#include<unordered_set>


using namespace std;


int main()
{
    unordered_set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    for(auto x : s) // using simple for each loop
    {
        cout << x << " ";
    }
    cout << endl;
    for(auto itr = s.begin(); itr != s.end(); itr++) // using iterator
    {
        cout << *itr <<" ";
    }
    cout << endl;
    cout << s.size() << endl;

    // for searching in the Unordered_Set
    if(s.find(30) != s.end())
    {
        cout << "present in the unordered set.";
    }
    else{
        cout << "not present in the set";
    }
    cout << endl;
    cout << "getting value throug the iterator\n.";
    cout << (*s.find(30)) << endl; // getting value throug the iterator.
    cout << "Size of the set is: " << s.size()<< endl;
    s.erase(30);
    cout << "After erasing 30\n";
    cout << "\nSize of the set is: " << s.size()<< endl;
    cout <<"we can erase key with the help of iterator.\n";
    auto it = s.find(10);
    s.erase(it);
    cout << "After erasing 10\n";
    cout << s.size();
    s.clear();
    cout << endl;
    cout << s.size();
    return 0;
}