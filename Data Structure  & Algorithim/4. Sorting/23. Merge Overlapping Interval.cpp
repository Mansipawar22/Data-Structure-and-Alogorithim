#include<bits/stdc++.h>

using namespace std;


struct Internval{
    int start;
    int end;
};

bool myCompair(Internval a, Internval b)
{
    return (a.start < b.start);
}

int MergeInterval(Internval arr[], int size)
{
    sort(arr, arr+size, myCompair);

    int res = 0;

    for (int i = 1; i < size; i++)
    {
        if(arr[i].start <= arr[res].end)
        {
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].start = min(arr[res].start, arr[i].start);
        }
        else{
            res += 1;
            arr[res] = arr[i];
        }
    }
    cout << "\n The Merged Intervals are: ";
    for(int i = 0; i <= res; i++)
    {
        cout << "[ " << arr[i].start << " , " << arr[i].end << " ] , ";  
    }
}



int main()
{
    Internval arr[] = { {5,10}, {3,15}, {18,30}, {2,7} };
    int size = sizeof(arr)/sizeof(arr[0]);
    MergeInterval(arr, size);
    return 0;
}