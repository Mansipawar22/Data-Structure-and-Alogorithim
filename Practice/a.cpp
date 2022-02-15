#include<bits/stdc++.h>

using namespace std;


using namespace;


int main()
{
    int test_case;
    int count = 0;
    cin >> test_case;
    int res[test_case];
    for(int i = 0; i < test_case; i++)
    {
        int bag;
        int chld;
        cin >> bag;
        cin >> chld;
        int arr[bag];
        for(int j = 0; i < bag; j++)
        {
            cin >> arr[j];
        }
        
        int total_candy = 0;
        for(int k = 0; k < bag; k++)
        {
            total_candy += arr[k];
        }
        
        res[i] = total_candy%chld;
    
    }
    
    for(int i = 0; i < test_case; i++)
    {
        cout << res[i] << endl;
    }
    
    return 0;
}