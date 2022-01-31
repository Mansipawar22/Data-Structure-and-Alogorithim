#include<bits/stdc++.h>
#include<unordered_map>

const int CHAR = 256;
 

using namespace std;

string RemoveDuplicates(string s1, int n)
{
    string res = "";
    int hash[123] = {0};//store the ascii value
    for (int i = 0; i < n; i++)
    {
        if(hash[s1[i]] == 0)
        {
            hash[s1[i]] = 1;
            res += s1[i];
        }
    }
    return res;
}


int main()
{
    string s1;
    cout << "enter the String to dlt Duplicates :";
    cin >> s1;
    int n = s1.length();
    cout << s1 << endl;
    cout << RemoveDuplicates(s1, n);
    return 0;
}