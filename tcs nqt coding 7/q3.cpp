#include <iostream>
#include <vector>
#include <deque>
#include <climits>
#include <string>
#include <sstream>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> dq;  // Stores indices of array elements
    vector<int> result;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        // Remove elements that are out of this window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove elements from back that are smaller than the current element
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // Add current element index
        dq.push_back(i);

        // Store the maximum of the window (only when first k elements are processed)
        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
        }
    }

    return result;
}

int main() {
    // Taking Input
    string input;
    getline(cin, input);

    for (auto &c : input) {
        if (c == ',') c = ' ';
    }

    vector<int> arr;
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    int k;
    cin >> k;

    // Optimized approach
    vector<int> v = maxSlidingWindow(arr, k);

    for (int &i : v) {
        cout << i << " ";
    }

    return 0;
}
