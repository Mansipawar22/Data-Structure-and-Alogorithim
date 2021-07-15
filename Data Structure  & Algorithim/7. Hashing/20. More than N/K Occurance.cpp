#include<iostream>
#include<algorithm>
#include<unordered_map>


using namespace std;

//My Soluiton similar to naive solution
// wrong solution not working proparly.
void printNbyK(int arr[], int size, int k)
{
    sort(arr, arr + size);
    int count = 1;
    int i;
    for (i = 0; i < size; i++)
    {
        int j;
        for(j = i+1; j < size; j++)
        {
            if(arr[i] == arr[i-1])
            {
                count ++;
            }
            else{
                break;
            }
        }
        if(count > size/k)
        {
            cout << arr[j-1] << " ";
        }
        count = 1;
        i = j;
    }
}


//Naive solution
// T(n) = O(n*log(n))
// space = O(1)
void printNbyK2(int arr[], int size, int k)
{
    sort(arr, arr + size);
    int i = 1;
    int count = 1;
    while (i < size)
    {
        while (i < size && arr[i] == arr[i-1])
        {
            count += 1;
            i += 1;
        }

        if ( count > size/k)
        {
            cout << arr[i-1] << " ";
        }
        count = 1;
        i += 1;
    }
}

// effcient solution
// T(n) = O(n)
// space = O(n)
// become more time consuming for large n.
void printNbyK3(int arr[], int size, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < size; i++)
    {
        map[arr[i]] += 1;
    }
    // cout << map.size() << endl;
    for(auto e : map)
    {
        if(e.second > size/k)
        {
            cout << e.first << " " << e.second << endl;
        } 
    } 
}

//More Effifcient solution
//T(n) = O(nk)
// space = O(k)
void printNbyK4(int arr[], int size, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < size; i++)
    {
        // 2.a
        if(map.find(arr[i]) != map.end())
        {
            map[arr[i]] += 1;
        }
        // 2.b
        else if (map.size() < k)
        {
            map.insert({arr[i], 1});
        }
        // 2.c
        else{
            for(auto x: map)
            {
                map[x.second] -= 1;
            }
        }
    }

    for(auto x: map)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if(x.first == arr[i])
            {
                count ++;
            }
        }
        if(count > size/k)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
}


int main()
{
    int arr[] = {30, 10, 20, 20, 10, 40, 20, 30, 30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    printNbyK4(arr, size, k);
    return 0;
}