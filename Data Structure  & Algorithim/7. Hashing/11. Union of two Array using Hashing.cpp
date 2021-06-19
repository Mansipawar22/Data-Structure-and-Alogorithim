#include<iostream>
#include<unordered_set>

using namespace std;

void printUnion(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(b[i]);
    }
    for(auto x : s)
        cout << x << " ";
}

int main()
{
    int m; int n;
    cout << "Enter the first array size:";
    cin >> m;
    int a[m];
    cout << "Element the element in the array:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    cout << "Enter the second array size:";
    cin >> n;
    int b[n];
    cout << "Element the element in the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    printUnion(a, b, m, n);
    return 0;

}