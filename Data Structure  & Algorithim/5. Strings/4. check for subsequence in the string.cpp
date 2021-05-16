#include<bits/stdc++.h>


using namespace std;

// bool isSubsequence(string s1, string s2, int size1, int size2)
// {
//     int count1 = 0;
//     int count2 = 0;
//     for (int i = 0; i < size2; i++)
//     {
//         for (int j = 0; j < count1; j++)
//         {
//             if(s2[i] == s1[j])
//             {
//                 count2 += 1;
//                 break; 
//             }
//             else{
//                 count1 += 1;
//             }
//         }
//     }
//     cout << count2 << endl;
//     if(count2 == size2-1)
//         return true;
//     else
//         return false;
// }

bool isSubsequence(string s1, string s2, int size1, int size2)
{
    if(size1 < size2)
        return false; // Optimization
    
    int j = 0;
    for (int i = 0; i < size1 && j < size2; i++)
    {
        if(s1[i] == s2[j])
        {
            j += 1;
        }
    }
    return (j==size2);
}

int main()
{
    string s1 = "ABCDE";
    string s2 = "ACD";
    int size1 = 5;
    int size2 = 3;
    cout << isSubsequence(s1, s2, size1, size2);
    return 0;
}