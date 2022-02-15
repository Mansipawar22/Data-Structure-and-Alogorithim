#include<bits/stdc++.h>


using namespace std;

int solution1(string &s, int len) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 1;
    int maxlength = 1;
    for(int i = 0; i< s.length(); i++)
    {
        if(s[i] == s[i+1])
        {
            count += 1;
        }
        else{
            maxlength = max(maxlength, count);
            count = 1;
        }
        if(i == s.length()-1)
        {
            maxlength = max(maxlength, count);
        }
    }
    int res = 0;
    int count1 = 1;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i+1])
        {
            count1 += 1;
        }
        else{
            res += maxlength - count1;
            count1 = 1;
        }
    }
    return res;
}
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 1;
    int maxlength = 1;
    for(int i = 0; i< S.length(); i++)
    {
        if(S[i] == S[i+1])
        {
            count += 1;
        }
        else{
            maxlength = max(maxlength, count);
            count = 1;
        }
        if(i == S.length()-1)
        {
            maxlength = max(maxlength, count);
        }
        int result = 0;
        int countsinghleblock = 1;
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == S[i+1])
            {
                countsinghleblock += 1;
            }
            else {
                result += maxlength - countsinghleblock;
                countsinghleblock = 1;
            }
        }
        return result;
    }
}

int main()
{
    string s = "bbbaaabbb";
     int len = s.length();
    cout << solution1(s, len);
    return 0;
}