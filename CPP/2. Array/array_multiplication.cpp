#include<iostream>


using namespace std;
#define N 4

int multiply_array(int arr1[N][N], int arr2[N][N], int result[N][N])
{
    int i,j,k,l;
    for(i = 0; i < N; i++)
    {
        for( j = 0; j < N; j++)
        {
            result[i][j] = 0;
            for( k = 0; k < N; k++)
            {
                l = arr1[i][k] * arr2[k][j];
                result[i][j] = result[i][j] + l;
            }   
        }
        
    }
    
    return 0;
}





int main()
{
    int arr1[N][N] = {
        {1, 1, 1,1},
        {2, 2, 2,2},
        {3, 3, 3,3},
        {4,4,4,4}
    };
    int arr2[N][N] = {
        {1, 1, 1,1},
        {2, 2, 2,2},
        {3, 3, 3,3},
        {4,4,4,4}
    };
    int result[N][N];
    multiply_array(arr1, arr2, result);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}