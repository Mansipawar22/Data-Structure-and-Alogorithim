#include<iostream>
#include<unordered_map>

using namespace std;


int printFriquency(int arr[], int size)
{
    unordered_map <int, int> map;
    for (int i = 0; i < size; i++)
    {
        map[arr[i]]++;
    }
    for(int i = 0; i < size; i++)
    {
        if(map[arr[i]] != -1)
        {
            cout << arr[i] << " " << map[arr[i]] << endl;
            map[arr[i]] = -1;
        }
    }
    return 0;
}




int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    printFriquency(arr, size);
    return 0;
}