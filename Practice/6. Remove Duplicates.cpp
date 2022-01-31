#include<bits/stdc++.h>


using namespace std;

string RemoveDuplicates(string s, int n)
{
    string res = "";
    int hash[123] = {0}; //storing the Ascii Values of Alphabates.
    for (int i = 0; i < n; i++)
    {
        if(hash[s[i]] == 0)
        {
            hash[s[i]] = 1;
            res += s[i];
        }
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << s << endl;
    cout << RemoveDuplicates(s, n);
    return 0;
}