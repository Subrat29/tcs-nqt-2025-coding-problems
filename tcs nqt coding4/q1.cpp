#include<iostream>
#include<map>
using namespace std;

int main(){
int girls, pens, pencils;
cin >> girls >> pens >> pencils;

if (pens%girls != 0 || pencils%girls != 0){
    cout << "Can't";
}
else {
    int pen_dist = pens/girls;
    int pencil_dist = pencils/girls;
    
    map<string, map<string, int>>mp;
    
    for(int i=1; i<=girls; i++){
        string g = "Girl " + to_string(i);
        mp.insert({g,{{"Pens",pen_dist},{"Pencils",pencil_dist}}});
    }
    
    for(auto [g,d]: mp){
        cout << g << ": ";
        cout << "Pens: " << d["Pens"] << "," << "pencils: " << d["Pencils"];
        cout << endl;
    }

    // for(auto it = mp.begin(); it != mp.end(); ++it){
    //     cout << it->first << ": ";
    //     cout << "Pens: " << it->second["Pens"] << "," << "pencils: " << it->second["Pencils"];
    //     cout << endl;
    // }
}

return 0;
}