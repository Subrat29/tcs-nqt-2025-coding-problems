#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

// tc: nlogk
// sc: k

int main()
{

    // taking input
    string input;
    getline(cin, input);

    for (auto &i : input)
    {
        if (i == ',')
            i = ' ';
    }

    stringstream ss(input);
    int num;
    vector<int> arr;
    while (ss >> num)
    {
        arr.push_back(num);
    }

    int k;
    cin >> k;

    // logic
    int n = arr.size();
    priority_queue<pair<int, int>> pq;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        pq.push({arr[i], i});
    }

    ans.push_back(pq.top().first);

    for (int i = k; i < n; i++)
    {
        pq.push({arr[i], i});
        // while(!pq.empty() && pq.top().second < i-k+1){
        //     pq.pop();
        // }
        if (pq.top().second < i - k + 1)
        {
            pq.pop();
        }
        ans.push_back(pq.top().first);
    }

    for (int &e : ans)
    {
        cout << e << " ";
    }

    return 0;
}