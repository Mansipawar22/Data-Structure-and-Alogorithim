#include<iostream>
#include<unordered_map>


using namespace std;

// Naive Solution
// T(n) => O(n^2)
// Space => O(1)
int print_frequency(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = i-1; j >= 0; j--)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==true)
            continue;
        int freq = 1;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j] == arr[i])
            {
                freq++;
            }
        }
            cout << arr[i] << " " << freq << endl;
    }
    return 0;
}

// Efficient Solution(Using Hashing)
// T(n) => O(n)
// Space => O(n)
int printFriquency(int arr[], int size)
{
    unordered_map <int, int> map;
    for (int i = 0; i < size; i++)
    {
        map[arr[i]]++; //first mat will check for the key and then insert the value
        // if the ket is not present then insert the key and set a default value as 0
        // in this default value will insert after the increment
    }
    for(auto x: map)
        cout << x.first << " " << x.second << endl;
    
    return 0;
}




int main()
{
    int arr[] = {10,12,10,15,20,12,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    // print_frequency(arr, size);
    printFriquency(arr, size);
    return 0;
}