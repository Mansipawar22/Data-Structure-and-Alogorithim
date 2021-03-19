#include<iostream>

using namespace std;


int Ispresent(int arr[], int size, int num)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            index = i;
        }
    }
    return index;
}


int main()
{
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << i+1 <<" element: ";
        cin >> arr[i];
    }
    int num;
    cout << "Enter the Number to Search in the array: ";
    cin >> num;
    cout << "Number is present at index:" << Ispresent(arr, size, num);
    return 0;
}