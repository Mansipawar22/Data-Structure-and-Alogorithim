#include<iostream>

using namespace std;

int main()
{
    int number;
    

    cout << "Enter the size of the array:";
    cin >> number;
    int arr[number];    

    for(int i=1; i<= number; i++)
    {
        cout<<"Enter "<<i<<" element in array:";
        cin>>arr[i];
    }

    for(int i=1; i<= number; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}