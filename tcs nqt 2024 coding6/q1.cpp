// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0; i<4; i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0; i<4; i++)
    {
        if(arr[i]%3 == 0 && arr[i]%5 == 0)
        {
            cout << "ThreeFive" << " ";
        }
        else if(arr[i]%3 == 0)
        {
            cout << "Three" << " ";
        }
        else if(arr[i]%5 == 0)
        {
            cout << "Five" << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}