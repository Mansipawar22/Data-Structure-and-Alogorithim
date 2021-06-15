#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{
    unordered_map <string, int> m;
    m["geek"] = 10;
    m["ide"] = 20;
    m.insert({"course", 30});
    for(auto x : m) // using for each loop
    {
        cout << x.first << " " << x.second << endl;
    }

    // find() of unordered_set
    if(m.find("ide") != m.end())
    {
        cout << "Present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }
    // printing value through iterator
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    // we can find the key using iterator
    auto it = m.find("geek");
    if(it != m.end())
    {
        cout << it->second << endl;
    }
    // count() function in STL
    if(m.count("ide") > 0)
    {
        cout << "Present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }
    cout << m.size() << endl;
    m.erase("ide");
    cout << m.size() << endl;
    m.insert({"CPP", 50});
    cout << m.size() << endl;
    m.erase(m.begin());
    cout << m.size() << endl;
    m.erase(m.begin(), m.end());
    cout << m.size() << endl;
    
    return 0;
}