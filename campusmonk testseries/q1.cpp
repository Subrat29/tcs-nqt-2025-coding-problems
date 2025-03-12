#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "n: " << n << endl;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "arr : ";
    for (auto &i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    int k;
    cin >> k;
    cout << "k: " << k << endl;

    int i = k - 1, j = n - 1, lsum = 0, rsum = 0, ans = 0;

    lsum = accumulate(arr.begin(), arr.begin() + k, 0);
    ans = lsum;

    while (i >= 0 && i < j)
    {
        lsum -= arr[i];
        rsum += arr[j];
        ans = max(ans, lsum + rsum);
        i--;
        j--;
    }

    cout << "Ans: " << ans << endl;
}
