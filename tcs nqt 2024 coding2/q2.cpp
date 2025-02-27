#include<bits/stdc++.h>
using namespace std;

// tc: n
// sc: n

// int main(){
//     int n;
//     cin >> n;
    
//     vector<int> v;
    
//     for(int i=2; i<=n; i++)
//     {
//         if(i == 2 || i == 3 || i == 5 || i == 7)
//             v.push_back(i);
        
//         if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0)
//             v.push_back(i);
//     }
    
//     for(int i=0; i<v.size(); i++)
//         cout << v[i] << " ";
    
    
//     return 0;
// }



// _TC: nlog log n
// sc: n

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     //logic
//     vector<bool> v(n+1, true);

//     for(int i=2; i<=n; i++){
        
//         if(v[i] == false)
//         continue;
        
//         int j = 2;
//         while(i*j <= n){
//             v[i*j] = false;
//             j++;
//         }
//     }
    
//     // print
//     for(int i=2; i<v.size(); i++){
//         if(v[i] == true)
//         cout << i << " ";
//     }

//     return 0;
// }


// tc: nloglogn
// sc: n
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n+1, 1);
    for(int i=2; i*i <= n; i++){
        if(v[i]){
            int j=i*i;
            while(j <=n){
                v[j]=0;
                j+=i;
            }
        }
    }
    // print
    for(int i=2; i<v.size(); i++){
        if(v[i] == true)
        cout << i << " ";
    }
    return 0;
}