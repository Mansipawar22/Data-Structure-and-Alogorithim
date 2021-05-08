#include<bits/stdc++.h>


using namespace std;


int main()
{
    string str = "geeksforgeeks";
    int count[26] = {0};
    for(int i=0; i < str.length(); i++)
    {
        count[ str[i] - 'a'] += 1;
    }
    for(int j = 0; j < 26; j++)
    {
        if(count[j] > 0)
        {
            cout << (char)(j + 'a') << ": " << count[j] << endl;
        }
    }
    return 0;
}