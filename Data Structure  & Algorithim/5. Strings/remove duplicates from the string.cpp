#include<bits/stdc++.h>


using namespace std;

void removeduplicates(char s[], char c)
{
    int n = strlen(s);
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    cout << s << endl;
}


int main()
{
    cout << "Enter string to remove duplicates:";
    char s[30], c;
    cin >>s;
    cin >> c;
    cout << s << endl;
    cout << c << endl;
    removeduplicates(s, c);
    return 0;
}