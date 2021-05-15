#include<bits/stdc++.h>


using namespace std;


int main()
{
    string str = "my name is prashant panwar";
    int count[26] = {0}; //Creating a array size of 26 to store the count of the character
    for(int i=0; i < str.length(); i++)
    {
        count[ str[i] - 'a' ] += 1; //Increamenting the element by 1
        /*
        for example:
        if we have 'g' the the ascii value of 'g' is 103 so
        what we will do, we need to find out the index of 'g' in count[],
        for calculating th index simply substracte the ascii value of 'g' from
        ascii value of 'a' ==> count[ str[i] - 'a' ] => count[ 'g' - 'a' ] => count[ 103 - 97 ] => count[6]
        then increatment the value at count[6]
        cout[0,0,0,0,0,1,0,0,0,0,0,........0];
        then for 'e'
        count[0,0,0,0,1,1,0,0,0,...........0];
        then for 'e'
        count[0,0,0,0,2,1,0,0,0,...........0];
        and so on;
        */
    }
    for(int j = 0; j < 26; j++)
    {
        if(count[j] > 0)
        {
            cout << (char)(j + 'a') << ": " << count[j] << endl;
        }
    }
    return 0;
}