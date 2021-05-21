#include<bits/stdc++.h>

using namespace std;

// d is the number of characters in the input alphabe
#define d  256

// q is a prime number

void RabinKarp(string &txt, string &pat, int q)
{
    int n = txt.length();
    int m = pat.length();
    
    // finding the value of d^(m-1) as h
    int h = 1;
    for (int i = 0; i < m-1; i++)
    {
        h = (h * d) % q;
    }
    
    // calculating the hash value of pattern and first window text
    int p = 0; // pattern hash value initially
    int t = 0; // text hash value initially
    for (int i = 0; i < m; i++)
    {
        p = (p * d + pat[i]) % q;
        t = (t * d + txt[i]) % q;
    }
    // cout << p << " " << t << endl;

    // check for spurious hits
    for (int i = 0; i <= n-m; i++)
    {
        bool flag = true;
        // Check the hash values of current window of text 
        // and pattern. If the hash values match then only 
        // check for characters on by one
        if(p==t)
        {
            for(int j = 0; j < m; j++)
            {
                if(txt[i+j] != pat[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag==true)
                cout << "String match at index:" << i << "\n";
        }

        // calculating t(i+1 with the help of t(i)
        if(i < n-m)
        {
           t = (d*(t - txt[i]*h) + txt[i+m])%q; 
            
            if(t < 0)
                t = (t + q);
        }
        
    }
}
 

int main()
{
    string txt = "abcabcbabc";
    string pat = "abc";
    int q = 101; // Prime number
    RabinKarp(txt, pat, q);
    // search(txt, pat, q);
    return 0;
}