#include<iostream>
using namespace std;

// tc: 1
// sc: 1

int main()
{
int a, b;
cin >> a >> b;

a = a-1;
long long ans = 0;

long long cube1 = (a*(a+1))/2;
long long cube2 = (b*(b+1))/2;

ans += cube2*cube2;
ans -= cube1*cube1;

cout << ans;

return 0;
}