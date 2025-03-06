#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

// INPUT FORMAT:
// 3
// "apple", 10.5, 10
// "orange", 2.5, 10
// "apple", 5.0, 20

int main() {

    // Taking input
    int n;
    cin >> n;
    
    vector<vector<string>>v;
    n++;
    
    while(n--){
        string input;
        getline(cin, input);
        
        if(input.empty())
        continue;
        
        for(auto &c : input){
            if(c == ',')
            c = ' ';
        }
        stringstream ss(input);
        string w;
        vector<string>temp;
        while(ss >> w){
            temp.push_back(w);
        }
        v.push_back(temp);
    }
    
    //Main Logic
    unordered_map<string, double>mp;
    
    //total sales
    double totSales = 0;
    int totItem = 0;
    
    for(int i=0; i<v.size(); i++){
        string fruit = v[i][0];
        double unitCost = stod(v[i][1]);
        int quantity = stoi(v[i][2]);
        
        mp[fruit] += quantity;
        totItem += quantity;
        totSales += unitCost*quantity;
    }
    
    //average Sales
    double avgSales = totSales/totItem;
    
    //best selling product
    string bestProd = "";
    int maxi = 0;
    for(auto &i: mp){
        if(i.second > maxi)
        {
            maxi = i.second;
            bestProd = i.first;
        }
    }
    
    //output
    cout << totSales << " " << avgSales << " " << bestProd;
    
    return 0;
}
