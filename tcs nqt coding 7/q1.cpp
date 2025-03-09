#include<iostream>
#include<vector>
#include<climits>
#include<string>
#include<sstream>
using namespace std;

// tc: n*k
// sc: n

int main(){

// Taking Input
string input;
getline(cin, input);

for(auto &c: input){
if(c == ',') c = ' ';
}

vector<int>arr;
stringstream ss(input);

int num;
while(ss >> num){
arr.push_back(num);
}

int k;
cin >> k;


//Main Logic
vector<int> v;
int n = arr.size();

for(int i=0; i+k <= n; i++){
    int maxi = INT_MIN;
    for(int j=0; j<k; j++){
        maxi = max(maxi, arr[i+j]);
    }
    v.push_back(maxi);
}

for(int &i : v){
cout << i << " ";
}

return 0;
}

