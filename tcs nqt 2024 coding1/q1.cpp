#include<bits/stdc++.h>
using namespace std;

//Recursive Approach
//tc: 2^n 
//sc: n

// int fibo(int n){
//     if(n == 0 || n == 1)
//     return n;
//     return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n;
//     cin >> n;
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         ans += fibo(i);
//     }
//     cout << ans;
//     return 0;
// }

// Iterative Approach
// tc: n - 2
// sc: 1

// Fibo series: 0 1 1 2 3 5 8 13
int main(){

    int n;
    cin >> n;

    if(n == 1)
    return 0;

    if(n==2)
    return 1;

    int prev1 = 1;
    int prev2 = 0;
    int ans = prev1 + prev2;
    int i = 3;
    
    while (i<=n)
    {
        int curr = prev1+prev2;
        ans += curr;
        prev2 = prev1;
        prev1 = curr;
        i++;
    }
    cout << "Ans: " << ans << endl;

    return 0;
}