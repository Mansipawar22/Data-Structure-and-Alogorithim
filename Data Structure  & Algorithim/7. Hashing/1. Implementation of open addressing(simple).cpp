// This program is the implementation of Open Addressing
// This implementaion is not the actual implementaion of hash table.
// It's just a simple implementaiom to understanding purpose


#include<bits/stdc++.h>

using namespace std;

struct Myhash
{
    int *arr;
    int cap, size;
    Myhash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
             
        }
    }
    int hash(int key)       // Hash function to calculate hash code
    {
        return key%cap;
    }
    bool search(int key)   // Search function to search a key i the hash table
    {
        int h = hash(key);
        int i = h;
        while(arr[i] != -1)
        {
            if(arr[i] == key)
            {
                return true;
            }
            i = ( i + 1 ) % cap; // Linea probing
            if(i == h)
            {
                return false;
            }
        }
        return false;
    }


    bool insert(int key)
    {
        if(size == cap)
        {
            return true;
        }
        int i = hash(key);
        while (arr[i]!= -1 and arr[i]!= -2 and arr[i]!= key)
        {
            i = (i+1) % cap;
        }
        if(arr[i] == key)
        {
             return false;
        }
        else{
            arr[i] = key;
            size++;
            return true;
        }
    }


    bool Delete(int key)
    {
        int h= hash(key);
        int i = h;
        while(arr[i] != -1)
        {
            if(arr[i] == key)
            {
                arr[i] = -2;
            }
            i = (i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }
};





int main()
{
    Myhash m1(7);
    m1.insert(49);
    m1.insert(72);
    m1.insert(56);
    if(m1.search(56) == true)
    {
        cout << "Kei is Present in the table.";
    }
    else{
        cout << "Key is not present";
    }
    m1.Delete(56);
    if(m1.search(56) == true)
    {
        cout << "Kei is Present in the table.";
    }
    else{
        cout << "Key is not present";
    }
    return 0;
}