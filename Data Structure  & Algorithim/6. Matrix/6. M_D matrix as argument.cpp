#include<bits/stdc++.h>

using namespace std;

const int R = 3;
const int C = 2;

void print(int matrix[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matrix[i][j] << " ";
        }
        
    }
    
}

int main()
{
    int matrix[R][C] = {{1,2},
                        {3,4},
                        {5,6}};

    print(matrix);
    return 0;
}