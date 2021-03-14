#include<iostream>

using namespace std;

int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << "Values of array: ";
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++)
    {
        cout << "Value and Address of " << i+1 << "element is" << arr[i] << "&" << &arr[i] << endl;
    }
    return 0;
}