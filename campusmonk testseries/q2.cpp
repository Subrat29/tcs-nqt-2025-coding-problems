#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    char ch = s[0];
    int cnt = 1;
    string ans = "";
    
    for(int i=1; i<s.size(); i++){
        if(s[i] == ch){
            cnt++;
        }
        else{
            ans += ch + to_string(cnt);
            ch = s[i];
            cnt = 1;
        }
    }
    ans += ch + to_string(cnt);
    reverse(ans.begin(), ans.end());
    
    cout << "Ans: " << ans << endl;
    return 0;
}