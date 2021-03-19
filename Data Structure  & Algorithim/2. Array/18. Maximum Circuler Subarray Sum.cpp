#include<iostream>


using namespace std;



//Naive Solution
//T(n)=> O(n^2)
int maxCirculerSum(int arr[], int size)
{
    int res = arr[0];
    for (int i = 0; i < size; i++)
    {
        int currmax = arr[i];
        int currsum = arr[i];
        for (int j = 1; j < size; j++)
        {
            int index = (i+j)%size;
            currsum += arr[index];
            currmax = max(currmax, currsum);
        }
        res = max(res, currmax);
    }
    return res;
}


//Efficient Solution
//T(n) => O(n)
int normalmaxsum(int arr[], int size)
{
    int res = arr[0];
    int maxending = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxending = max(arr[i], maxending+arr[i]);
        res = max(res, maxending);
    }    
    return res;
}

int overallmaxsum(int arr[], int size)
{
    int max_normal = normalmaxsum(arr, size);
   if (max_normal < 0)
    {
        return max_normal;
    }
    int arr_sum = 0;
    for (int i = 0; i < size; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalmaxsum(arr, size);
    return max(max_normal, max_circular);
}


int main()
{
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << overallmaxsum(arr, size);
    
    return 0;
}