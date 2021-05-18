#include<bits/stdc++.h>

using namespace std;

void reverse(char str[], int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}


void Reverse_Words(char str[], int size)
{
    int start = 0;
    for (int end = 0; end < size; end++)
    {
        if(str[end]==' ')
        {
            reverse(str, start, end-1); // this will not reverse the last word in the string.
            start = end +1;
        }
    }
    reverse(str, start, size-1); // that's why we need to reverse the last word indevidually.
    reverse(str, 0, size-1);
    //cout << str << endl;
    //return str;
}

int main()
{
    char str[] = "Welcome to Gfg";
    int size = strlen(str);
    Reverse_Words(str, size);
    cout << str << endl;
    return 0;
}