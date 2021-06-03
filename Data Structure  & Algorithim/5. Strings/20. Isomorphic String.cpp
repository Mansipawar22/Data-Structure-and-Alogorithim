#include<bits/stdc++.h>


using namespace std;

const int CHAR = 26;

bool isIsomorphic(string s1, string s2)
{
    int counts1[CHAR] = {0};
    int counts2[CHAR] = {0};
    int char_in_s1 = 0;
    int char_in_s2 = 0;
    int n = s1.length();
    int m = s2.length();
    int res = false;
    // Base case
    if(n != m)
        return res;

    for (int i = 0; i < n; i++)
    {
        counts1[s1[i] - 'a']++;
        counts2[s2[i] - 'a']++;
    }

    // counting the number of character in both the string.
    for (int i = 0; i < CHAR; i++)
    {
        if(counts1[i] != 0)
            char_in_s1 += 1;

        if(counts2[i] != 0 )
            char_in_s2 += 1;
    }

    if(char_in_s1 == char_in_s2)
    {
        sort(counts1, counts1+CHAR);
        sort(counts2, counts2+CHAR);

        for (int i = 0; i < CHAR; i++)
        {
            if(counts1[i] != counts2[i])
            {
                res = false;
                return res;
            }
            else{
                res = true;
            }
        }
    }
    return res;
}

int main()
{
    string s1;
    string s2;
    cout << "s1: ";
    cin >> s1;
    cout << "s2: ";
    cin >> s2;
    cout << isIsomorphic(s1, s2);
    return 0;
}