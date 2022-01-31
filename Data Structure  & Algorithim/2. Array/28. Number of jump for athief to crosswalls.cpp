#include<bits/stdc++.h>

using namespace std;


//Naive Solution => O(n*height[i]/(x-y))
int Jumps(int x, int y, int total_walls, int height[])
{
    int jumps = 0;
    for (int i = 0; i < total_walls; i++)
    {
        if(height[i] < x)
        {
            jumps += 1;
            continue;
        }

        int h = height[i];
        while (h > x)
        {
            jumps += 1;
            h = h - (x - y);
        }
        jumps += 1; // for remaining height 
        //
    }
    return jumps;
}



//Efficient solution
int jumpEfficently(int x, int y, int total_walls, int height[])
{
    int jumps = 0;
    for (int i = 0; i < total_walls; i++)
    {
        if(height[i] <= x)
        {
            jumps += 1;
            continue;
        }
        int h = height[i] - x;
        int initial_jump = h/(x-y);
        if(h%(x-y) != 0)
        {
            initial_jump ++;
            /*
            for example if heigth = 50, x= 6 , y = 1
            then h = 50-x = 44
            initial jump = 44/5 = 8
            but to cover remainder we need to jump +1 time more.
            */
        }
        jumps = jumps+initial_jump + 1;
        /*
        Now we in 44+ place now in this situation one jump will lead us to climd the wall.
        */
    }
    return jumps;
}

int main()
{
    int x = 10 ;
    int y = 1;
    int heigth[] = {11, 10, 10, 9};
    int total_walls = sizeof(heigth)/sizeof(heigth[0]);
    cout << "Total jumps required to Escape:" << jumpEfficently(x, y, total_walls, heigth);
    return 0;
}