#include<bits/stdc++.h>
using namespace std;

vector<int>findCollatz(int n)
{
    vector<int> arr;
    while(n != 1)
    {
        arr.push_back(n);
        if(n%2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = 3*n + 1;
        }
    }
    arr.push_back(n);
    return arr;
}

int main()
{
    // Task1
    int num; 
    cin >> num;
    
    vector<int> task1 = findCollatz(num);
    int sz1 = task1.size();
    
    for(int i=0; i<sz1; i++)
    {
        cout << task1[i];
        
        if(i != sz1-1)
        {
            cout << " ";
        }
    }
    
    cout << ",";
    
    // Task2
    int maxLen = 0;
    int maxLen_k = 0;
    int maxValue = 0;
    int maxValue_k = 0;
    
    for(int i=1; i<=num; i++)
    {
        vector<int> task2 = findCollatz(i);
        int sz = task2.size();
        
        if(maxLen < sz )
        {
            maxLen = sz;
            maxLen_k = i;
        }
        
        for(int j = 0; j<sz; j++)
        {
            if(task2[j] > maxValue)
            {
               maxValue = task2[j];
               maxValue_k = i;
            }
        }
    }
    cout << maxLen << " " << maxLen_k;
    
    cout << ",";
    
    //Task3
    cout << maxValue << " " << maxValue_k;

    return 0;
}