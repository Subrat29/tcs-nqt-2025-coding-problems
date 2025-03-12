#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
// taking input
string input;
getline(cin, input);

stringstream ss(input);
int num;
vector<int> arr;

while(ss >> num){
arr.push_back(num);
}

int target;
cin >> target;

cout << "Arr: ";
for(auto &j : arr){
    cout << j << " ";
} cout << endl;
cout << "Taget: " << target << endl;

// main logic
vector<vector<int>>ans;
int n = arr.size();

for(int i=0; i<n; i++){
    int sum = 0;
    vector<int>v;
    for(int j=i; j<n; j++){
        sum += arr[j];
        v.push_back(arr[j]);
        if(sum == target)
        ans.push_back(v);
    }
}

cout << "Output\n";
for(auto &i : ans){
    for(auto &j : i){
    cout << j << " ";
}
    cout << endl;
}

return 0;
}