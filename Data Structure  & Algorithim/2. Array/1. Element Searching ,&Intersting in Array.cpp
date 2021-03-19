#include<iostream>

using namespace std;


//Searchind Element in the Array. 
int search(int arr[], int size, int num)
{
    int i;
    for ( i = 0; i < size; i++)    
    {
        if(arr[i] == num)
            return i;
    }
    return -1;
} 

//Insert Element in the Array.
int insert(int arr[], int cap, int size, int num1, int pos)
{
    if(size == cap)
    {
        cout << "Array is already full\n";
        return size;
    }
    int index = pos -1;
    int i;
    for(i = size-1; i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    cout << i << endl;
    arr[index] = num1;
    size++;
    return (size);
}

int main()
{
    int arr[20] = {2, 4, 7, 3, 6, 5, 2, 14};
    int cap = sizeof(arr)/sizeof(arr[0]);
    int size = 0;
    
    for( int i = 0; i < cap; i++)
    {
        if(arr[i] == 0)
            break;
        size++;
    }

    cout<<"##################################################"<<endl;
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\nCapicity of array: " << cap << endl;
    cout << "Current size of the array: " << size << endl;   

    cout<<"##################################################"<<endl;
    cout << "Enter a number to search: ";
    int num;
    cin >> num;
    int index = search(arr, size, num);
    if(index == -1)
        cout << "Number is not present in the array" << endl;
    else
        cout << "number is present at Position: " << (index+1) << endl;

    cout <<"#################################################"<<endl;
        int num1;
        int pos;
        cout << "\nEnter the number to insert:";
        cin  >> num1;
        cout << "Enter the position:";
        cin >> pos;
        size = insert(arr, cap, size, num1, pos); 
        cout << "After insertion\n";
        cout << "Capicity of array: " << cap << endl;
        cout << "Current size of the array: " << size << endl;
    
    cout <<"##################################################"<<endl;
    cout << "Final Array after insertion and Searching." << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}