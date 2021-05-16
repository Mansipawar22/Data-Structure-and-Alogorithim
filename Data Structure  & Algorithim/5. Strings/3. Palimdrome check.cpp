#include<bits/stdc++.h>

using namespace std;


//Naive Solution
//T(n) => O(n)
//space => O(n)
bool isPalindrome1(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return(str==rev);
}

//Efficient Solution
//T(n) => O(n)
//space => O(1)
bool isPalindrome2(string str)
{
    int left = 0;
    bool res = false;

    int right = str.length() - 1;
    while (left <= right)
    {
        if(str[left]==str[right])
        {
            res = true;
        }
        else{
            return false;
        }
        left+=1;
        right-=1;
    }
    return res;
}

int main()
{
    string str;
    cout <<"Enter a string to check Palindrome or not: ";
    getline(cin, str);
    cout << isPalindrome1(str);
    return 0;
}