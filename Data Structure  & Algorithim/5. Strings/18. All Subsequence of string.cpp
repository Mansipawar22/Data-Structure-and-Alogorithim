#include<bits/stdc++.h>


using namespace std;

void AllSubsequence(string input, string output)
{
    // Base case, wjen to print the subsequence
    if(input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    // case 1: Not Considering the first Character
    AllSubsequence(input.substr(1), output);
    // input = "bc"

    // case 2: Considering the first Character
    // input ko chota krna
    // output m current considered character add krna.
    AllSubsequence(input.substr(1), output + input[0]);
}

int main()
{
    string input;
    string output = "";
    cout << "Enter th string to print all the Subsequence: ";
    cin >> input;
    AllSubsequence(input, output);
    return 0;
}