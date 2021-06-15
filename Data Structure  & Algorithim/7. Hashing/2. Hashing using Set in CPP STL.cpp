#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    // Empty set Container
    set <int> s;
    int arr[] = {10,30,50,56,40,36,18,35,20,29};
    // Inserting the elements of the Array
    // into Set
    for(int i = 0; i < 10; i++)
    {
        s.insert(arr[i]);
    }
    // Printing the Content of the set
    // The Element of the Set will be sorted
    // without any duplicates
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    //  checking if 50 Present in the set
    if (s.find(57) != s.end())
    {
        cout << "\n50 is Present in the set.";
    }
    else{
        cout << "\n50 is not Present.";
    }
    return 0;
}

