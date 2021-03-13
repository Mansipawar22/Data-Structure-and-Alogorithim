#include<iostream>


using namespace std;


//Naive Solution
int Maxprofit(int price[], int start, int end1)
{
    int profit =0;
    if (end1 <= start)
    {
        return 0;
    }
    for (int i = start; i < end1; i++)
    {
        for (int j = i+1; j <= end1; j++)
        {
            if(price[j] > price[i])
            {
                int current_profit = price[j]-price[i]+Maxprofit(price, start, i-1)+Maxprofit(price, j+1, end1);
                profit = max(profit, current_profit);
            }
        }
    }
    return profit;
}

//Efficient Solution
int MAxProfit1(int price[], int size)
{
    int profit = 0;
    for (int j=1; j < size; j++)
    {
        if (price[j] > price[j-1])
        {
            profit += price[j]-price[j-1];
        }
        
    }
    
    return profit;
}





int main()
{
    int price[]={1,2,3,4,5,6,7,8,9};
    cout << MAxProfit1(price, 9);
    return 0;
}