#include<bits/stdc++.h>


using namespace std;


//Naive Solution
bool isPalindrom(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev)
    {
        return true;
    }
    return false;
}
//efficient Solution
int isPalindrom2(string str)
{
    int left = 0;
    int right = str.length()-1;
    while(left < right)
    {
        if(str[left] != str[right])
        {
            return false;
        }
        else{
            left ++;
            right--;
        }
    }
    return true;
}



int main()
{
    string str;
    cin >> str;
    cout << isPalindrom2(str);
    return 0;
}