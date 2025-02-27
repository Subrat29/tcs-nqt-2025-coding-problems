#include <bits/stdc++.h>
using namespace std;

// tc: n^2
// sc: 1

// int main()
// {
//     int num;
//     vector<int> v;
//     while(cin >> num){
//         v.push_back(num);
//     }
//     int n = v.size();
//     int ans = -1;
//     for(int i=1; i<=n; i++){
//         bool flag = false;
//         for(int j=0; j<n; j++){
//             if(v[j] == i){
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false){
//             ans = i;
//             break;
//         }
//     }
//     cout << "Ans: " << ans << endl;
//     return 0;
// }

// tc: n
// sc: 1

int main()
{
    string input;
    getline(cin, input);
    for (char &c : input)
    {
        if (c == ',')
            c = ' ';
    }
    stringstream ss(input);
    int num;
    vector<int> v;
    while (ss >> num)
    {
        v.push_back(num);
    }

    // logic
    int n = v.size() + 1;
    int totalSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    cout << "Ans: " << totalSum - sum << endl;
}