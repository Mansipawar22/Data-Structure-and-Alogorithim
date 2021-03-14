#include<iostream>

using namespace std;

int array_function(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 <<" Element in array: ";
        cin >> arr[i];
    }
    return 0;
}


int print_function(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout <<arr[i]<< ", ";
    }
    cout << endl;
    return 0;
}

int reverse_function(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp;
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start ++;
        end --;
    }
    return 0;
}

int main()
{
    int size_of_array;
    cout << "Enter the size of array: ";
    cin  >>size_of_array ;
    int arr[size_of_array];

    array_function(arr, size_of_array);

    cout<<"Before reversing the array: ";

    print_function(arr, size_of_array);
    
    reverse_function(arr, 0, size_of_array - 1);
    
    cout<<"After reversing the array: ";
    
    print_function(arr, size_of_array);

    return 0;
}