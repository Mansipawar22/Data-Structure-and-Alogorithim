 /*
 Frequencies in an Sorted Array
 */

#include<iostream>

using namespace std;

int Frequecies(int arr[], int size)
{
    int count = 1;
    int i = 0;
    while (i < size)
    {
        if (arr[i] == arr[i+1])
        {
            count++;
        }
        else{
            cout << arr[i] << "--->" << count << endl;
            count=1;
        }
        i++;
    }
   return 0; 
}

int main()
{
    int arr[] = {10,10,10,20,20,30};
    int size = 6;
    Frequecies(arr, size);
    cout << "Check";
    return 0;
}