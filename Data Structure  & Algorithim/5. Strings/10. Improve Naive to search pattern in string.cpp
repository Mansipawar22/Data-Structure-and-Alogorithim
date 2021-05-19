#include<bits/stdc++.h>

using namespace std;

void Pattern(string text, string pat)
{
    int N = text.size();
    int M = pat.size();
    // int i = 0;
    for(int i = 0; i <= N - M;)
    {
        int j;
        for (j = 0; j < M; j++)
            if(text[i + j] != pat[j])
                break;

        if(j == M)
        {
            cout << "Pattern match at index: " << i << " ";
            i = i + M;
        }
        else if (j == 0)
        {
            i = i + 1;
        }
        else{
            i = i + j;
        }
    }
}
    
    

int main()
{
    string text = "ABCEABEFABCD";
    string pat = "ABCD";
    Pattern(text, pat);
    // search( pattern, text);

    return 0;
}