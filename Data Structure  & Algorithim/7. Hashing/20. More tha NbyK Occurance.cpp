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

// void AllCandidateMinusOne(unordered_map<int, int> map, int temp[] , int k)
// {
//     for (int i = 0; i < map.size(); i++)
//     {
//         map[temp[i]] -= 1;
//     }
//     return map;
// }

void printNbyK4(int arr[], int size, int k)
{
    unordered_map<int, int> map1;
    int temp[k];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        // 2.a
        if(map1.find(arr[i]) != map1.end())
        {
            map1[arr[i]] += 1;
        }
        // 2.b
        else if(map1.size() < k-1)
        {
            map1.insert({arr[i], 1});
            temp[count] = arr[i];
            count++;
        }
        // 2.c
        else{
            for (int i = 0; i < map1.size(); i++)
            {
                map1[temp[i]] -= 1;
            }
        }
    }

    cout << "map size: " << map1.size() << endl;
    // for(int i = 0; i < k; i++)
    // {
    //     if(map1.find(temp[i]) != map1.end())
    //     {
    //         cout << temp[i] << " "  << "Present in the map. "<< endl;
    //     }
    // }
    for(auto x: map1)
    {
        cout << x.first << " " << x.second << endl;
    }
    for(auto x: map1)
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
            cout << x.first << " Occure more than n/k times in the array." << endl;
        }
    }
}


int main()
{
    int arr1[] = {30, 10, 20, 20, 10, 20, 30, 30};
    int k1 = 4;
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {30, 10, 20, 30, 30, 40, 30, 40, 30};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int k2 = 2;
    int arr3[] = {30, 10, 20, 20, 20, 10, 40, 30, 30};
    int size3 = sizeof(arr3)/sizeof(arr3[0]);
    int k3 = 4;
    cout << "=====================First array=======================" << endl;
    printNbyK4(arr1, size1, k1);
    cout << "=====================Second array=======================" << endl;
    printNbyK4(arr2, size2, k2);
    cout << "=====================Third array=======================" << endl;
    printNbyK4(arr3, size3, k3);
    return 0;
}