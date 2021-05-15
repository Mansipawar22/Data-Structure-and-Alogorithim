#include<bits/stdc++.h>


using namespace std;



int main()
{
    cout <<"C STYLE STRING"<< endl;
    // first
    char str1[] = "GFG"; 
    cout << str1 << endl; // at the end of th c style string we have a "\0" to end the string.
    // second
    char str2[6] = "gfg";
    cout << str2 << endl; // ['g', 'f', 'g', '\0', '\0', '\0'];
    cout << sizeof(str2) << endl;
    // third
    char str3[] = {'g', 'f', 'g'};
    cout << str3 << endl; // output = gfggfg, size = 3
    cout << sizeof(str3) << endl;
    // fourth
    char str4[] = {'g', 'f', 'g', '\0'};
    cout << str4 << endl; // output = gfg, size = 4 , that why we nees to end string with '\0' at the end.
    cout << sizeof(str4) << endl;
    // fifth
    // strlen() used to find the lenght of the  string.
    char str5[] = "GeeksforGeeks";
    cout << strlen(str5) << endl;
    // sixth
    // strcmp() user to compare two string lexicographically.
    char str6[] = "ABC";
    char str7[] = "abc";
    cout << strcmp(str6, str7) << endl;
    cout << strcmp(str6, str6) << endl;
    cout << strcmp(str7, str6) << endl;
    //seventh
    //strcpy() userd to ccopy the string to the address. cuz we can not assign string after initializing first,
    // we have to initializa and assign both at the same time, that's why we use strcpy(),
    // error: incompatible types in assignment of 'const char [4]' to 'char [6]'
    //str8 = "GfG";
    char str8[6];
    strcpy(str8, "GfG");
    cout << str8 << endl;

    cout << "==============================" << endl;
    cout << "C++ STYLE STRING" << endl;
    // first
    string s1 = "geeksforgeeks";
    cout << s1.length() << endl;
    s1 = s1 + " is good."; //Concotination
    cout << s1 << endl;

    cout << s1.substr(3, 5) << endl; // used to get substring from the string sybstr(index, size)

    cout << s1.find(" is good.") << endl; // used to find the substring form the string. 
    // Note: only return the index of first occurance.
    cout << s1 << endl;
    // second
    string s2 = "bce";
    string s3 = "bcd";
    if(s2 == s3)
        cout << " both are same" << endl;
    else if(s2 < s3)
        cout << "s2 is smaller." << endl;
    else{
        cout << "s2 is greater." << endl;
    }
    // third
    // console input from the user.
    string name;
    cout << "Enter your name. ";
    //cin >> name; // cin does not allow to read space in the string that's why ci doesn't read complete name "Prashant panwar",
    // only read first substring "prashant". to get rid of this c++ stl library provide getline mehtod to read space in the string.
    getline(cin, name);
    cout << "your name is " << name << endl;
    // fourth
    //Iternating throug string.
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << " ";
    }
    cout << endl;
    for(char x: s1)
    {
        cout << x << " ";
    }
    return 0;
}