#include<bits/stdc++.h>

using namespace std;

int isMedian(int arr1[], int arr2[], int s1, int s2, int s3)
{
    int cap = s3-1;
    int temp[s3];
    for (int i = 0; i < s1; i++)
    {
        temp[i] = arr1[i];
    }
    for (int i = 0; i < s2; i++)
    {
        temp[i+s1] = arr2[i];
    }
    
    for (int i = 0; i < s3; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    sort(temp, temp+s3);
    for (int i = 0; i < s3; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    if(s3%2==0)
    {
        return ((temp[cap/2]+temp[(cap/2)+1])/2);
    }
    else{
        return temp[cap/2];
    }
    cout << endl;
    return 0;
}

double isMedian2(int arr1[], int arr2[], int s1, int s2)
{
    int begin1 = 0;
    int end1 = s1;
    while (begin1 <= end1)
    {
        int i1 = (begin1+end1)/2;
        int i2 = (s2+s1+1)/2 - i1;
        int min1 = (i1==s1)?INT_MAX:arr1[i1];
        int max1 = (i1==0)?INT_MIN:arr1[i1-1];
        int min2 = (i2==s2)?INT_MAX:arr2[i2];
        int max2 = (i2==0)?INT_MIN:arr2[i2-1];
        if ((max1 <= min2)&&(max2 <= min1))
        {
            if ((s1+s2)%2==0)
            {
                return((double)max(max1,max2)+min(min1,min2))/2;
            }
            else{
                return (double)max(max1,max2);
            }
        }
        else if(max1 > min2)
        {
            end1 = i1-1;
        }
        else{
            begin = i1+1;
        }
    }
}


int main()
{
    int arr1[] = {10,20,30,40,50};
    int arr2[] = {5,15,25,35,45,55,65,75};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int s3 = s1 + s2;
    //cout << isMedian(arr1, arr2, s1, s2, s3);
    cout << isMedian2(arr1, arr2, s1, s2);
    return 0;
}