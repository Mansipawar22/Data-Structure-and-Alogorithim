#include<iostream>
#include<unordered_map>


using namespace std;

void printDistinct(int arr[], int size, int k)
{
    for (int i = 0; i <= size-k; i++)
    {
        int count = 0;
        for (int j = 0; j < k; j++)
        {
            bool flag = false;
            for (int p = 0; p < j; p++)
            {
                if(arr[i+j] == arr[i+p])
                {
                    flag = true;
                    break;
                }
            }
            if(flag==false)
            {
                count += 1;
            }
        }
        cout << count << " ";
    }
}


//efficient Solution
void countDistinctinWindow(int arr[], int size, int k)
{ 
    unordered_map<int, int> map;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(i < k)
        {
            map[arr[i]] += 1; // inserting first kth element in the hash map 
            /*
            for every distinct element map will insert element in the hashmap
            for every same element it will increase the value for the element.
            */
        }
        if(i == k-1) 
        { 
            cout << map.size() << " "; //printing the dise of the hash table which is euqal to the distinct elemnt in the window.
        }
        if(i >= k) // for the next window
        {
            if(map[arr[i-k]] == 1) // if the first element of the previous window hve the frequency of 1
            {
                map.erase(arr[i-k]); // then erase the last fit=rst element
            }
            else{                   // if the first element frequency is not 1.
                map[arr[i-k]] -= 1; //decrease the frequency by 1.
            }
            map[arr[i]] += 1; // insrting the next element of array.
            cout << map.size() << " "; // printing th frequency of the map.
        }
    }
}

int main()
{
    int arr[] = {10,20,20,10,30,40,10};
    int k = 4;
    int size = 7;
    countDistinctinWindow(arr, size, k);
    return 0;
}