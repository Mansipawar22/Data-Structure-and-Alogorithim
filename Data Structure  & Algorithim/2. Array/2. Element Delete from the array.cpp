/*
This Deletion method will delete only firs
 Oc curance of the element in the Array
*/

#include<iostream>

using namespace std;

int Delete(int array[], int sizeofarr, int number)
{
    int i;
    for (i = 0; i < sizeofarr; i++)
    {
        if(array[i]==number)
            break;
    }
    /*This is the Codition when we did't find the  number in the array
    and 'i' reached at end of the array or 'i' become 'sizeofarr',
    in that case we will return i*/
    if(i == sizeofarr)
        return sizeofarr;
    //Deleying the Element from the Array.
    for(int j = i; j < sizeofarr-1; j++)
    {
        array[j] = array[j+1];
    }
    return sizeofarr-1;
}

int main()
{
    int arr[10]= {1,2,3,4,5,6};
    int cap =  sizeof(arr)/sizeof(arr[0]);
    int size = 0;
    for(int i = 0; i < cap; i++)
    {
        if(arr[i] == 0)
            break;
        size++;
    }
    cout << "##########################################" << endl;
    cout << "Before Deletion.\n" ;
    cout << arr << endl;
    cout << cap << endl;
    cout << size << endl;
    cout << "##########################################\n";
    int num;
    cout << "Enter number to Delete:" << endl;
    cin >> num; 
    cout << "###########################################\n";
    cout << "After Deletion\n";
    size = Delete(arr, size, num);
    cout << arr << endl;
    cout << cap << endl;
    cout << size << endl;
    return 0;
}