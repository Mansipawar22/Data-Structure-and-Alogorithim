#include<iostream>

using namespace std;


//My Solution
int MinGropFlip(bool arr[], int size)
{
    int Zeros = 0;
    int Once = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1 && arr[i+1]!=1)
        {
            Once++;
        }
        if(arr[i] == 0 && arr[i+1]!=0)
        {
            Zeros++;
        }
    }

    if (Once < Zeros)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 1 && arr[i-1] != 1)
            {
                cout << "From " << i << " to ";
            }
            else if(arr[i-1] == 1 &&arr[i]!=1)
            {
                if(i!=0){
                    cout << i-1 << endl;
                }
            }
        }
    }
    if (Once > Zeros)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0 && arr[i-1]!=0)
            {
                cout << "From " << i << " to ";
            }
            if(arr[i-1] == 0 &&arr[i]!=0)
            {
               if(i!=0){
                    cout << i-1 << endl;
                }
            }
        }
    }
    if (Once == Zeros)
     {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0 && arr[i-1]!=0)
            {
                cout << "From " << i << " to ";
            }
            if(arr[i-1] == 0 &&arr[i]!=0)
            {
                if(i!=0){
                    cout << i-1 << endl;
                }
                
            }
        }
    }
}



int main()
{
    int size;
    cout << "Eneter the Size of Array: ";
    cin >> size;
    bool arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    MinGropFlip(arr, size);
    return 0;
}