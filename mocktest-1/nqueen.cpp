#include<bits/stdc++.h>
int main(){
    int n;
    cin >> n;
    
    vector<vector<int>>v(n+1);
    vector<vector<vector<int>>>ans;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            if(dfs(v)){
                ans.push_back(v);
            }
        }
    }
    
    for(int i: ans)
        for(int j : i)
            for(int k : j)
                cout << k;
            cout << ", ";
        cout << endl;
        
    return 0;
}