#include<iostream>


using namespace std;


/*
My Solution & Naive Solution
Time Complexity => Theta(n^2)
Aus Space => Theta(1)
*/
int Leader(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        for(int j=i+1; j<size;j++)
        {
            if(arr[i] <= arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
    }
}

/*
Efficient Solution
T(n) = Theta(n)
*/
int Leader2(int arr[], int size)
{
    int curr_lead = arr[size-1];
    cout << curr_lead << " ";
    for (int i = size-2; i >= 0; i--)
    {
        /* code */
        if(curr_lead < arr[i])
        {
            curr_lead = arr[i];
            cout << curr_lead << " ";
        }
    }
    
}


int main()
{
    int arr[] = {17, 10, 4, 5, 10, 6, 5, 2};
    Leader2(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}