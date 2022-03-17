#include<bits/stdc++.h>

using namespace std;

int findalldivisor(int N)
{
    int count = 0;
    while (N > 0)
    {
        if(N%2 == 1)
        {
            N = N-1;
            count += 1;
        }
        else{
            int temp = N/2;
            N = N-temp;
            count += 1;
        }
    }
    return count;
}

int main()
{
    // vector<int> vec;
    int N;
    cin >> N;
    cout << findalldivisor(N);
    return 0;
}