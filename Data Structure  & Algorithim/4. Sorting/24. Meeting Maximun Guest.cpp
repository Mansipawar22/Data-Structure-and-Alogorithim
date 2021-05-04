#include<bits/stdc++.h>

using namespace std;




//Naive Solution
//T(n) => O(n^2)
int maxGuest(int arrive[], int departure[], int size)
{
    int res = 0;
    for(int i = 0; i < size; i++)
    {
        int curr = 1;
        for (int j = i+1; j < size; j++)
        {
            if((arrive[i] >= arrive[j] and arrive[i] <= departure[j])
                                        or
                (arrive[j] >= arrive[i] and arrive[j] <= departure[i]))
            {
                curr += 1;
            }
        }
        res = max(res, curr);
    }
    return res;
}


//Efficient Solution
//T(n) => O(nlog(n))
int MaxGuest2(int arrive[], int departure[], int size)
{
    sort(arrive, arrive + size);
    sort(departure, departure + size);
    int i = 0, j = 0, curr = 0, res = 0; 
    while (i < size and j < size)
    {
        if(arrive[i] <= departure[j])
        {
            curr += 1;
            i += 1;
        }
        else{
            curr -= 1;
            j += 1;
        }
        res = max(res, curr);
    }
    return res;
}


int main()
{
    int arrive[] = {900, 940, 950, 1100, 1500, 1800};
    int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
    int size  = sizeof(arrive)/sizeof(arrive[0]);
    cout << MaxGuest2(arrive, departure, size);
    return 0;
}