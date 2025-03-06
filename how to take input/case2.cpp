#include <bits/stdc++.h>
using namespace std;

// REmemeber:: If Input is in that format but if you introduce ',' then it disrupts the parsing.

// 3
// "apple" 10.5 10
// "orange" 2.5 10
// "apple" 5.0 20

int main() {
    int n;
    cin >> n;
    
    cout << "n = " << n << endl;
    
    while(n--){
        string name;
        double unit_cost;
        int quant;

        cin >> name >> unit_cost >> quant;
        cout << name<< " " << unit_cost<< " " << quant << endl;
    }
    return 0;
}
