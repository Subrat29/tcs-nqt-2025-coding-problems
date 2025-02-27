#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n = 3;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }

    int num;
    vector<int> arr;
    while(cin >> num){
        arr.push_back(num);
    }

    int n = arr.size();
    unordered_set<int>st;
    
    for(int i=0; i<n; i++)
    {
        int bitwise_or = 0;
        for(int j = i; j < n; j++){
            bitwise_or = bitwise_or | arr[j];
           st.insert(bitwise_or);
        }
    }
    cout << "Ans: " << st.size();
}