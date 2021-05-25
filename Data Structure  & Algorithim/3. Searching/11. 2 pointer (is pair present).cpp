#include<iostream>

using namespace std;


//Two pointer Approuch to findd the pair
bool isPair(int arr[], int size, int num)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == num)
        {
            cout << "\n(" << left << "," << right << ")\n" << endl;
            return true;
        }
        else if(arr[left] + arr[right] > num)
        {
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = 11;
    int num = 20;
    cout << isPair(arr, size, num);
    return 0;
}