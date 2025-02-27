#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix;
    string line;

    // Read the entire matrix line by line
    while (getline(cin, line) && !line.empty()) {
        vector<int> row;

        // Replace commas with spaces
        for (char &c : line) {
            if (c == ',') c = ' ';
        }

        // Extract numbers using stringstream
        stringstream ss(line);
        int num;
        while (ss >> num) {
            row.push_back(num);
        }

        // Store the row if it's not empty
        if (!row.empty()) {
            matrix.push_back(row);
        }
    }

    // Output the processed matrix
    cout << "Processed Matrix:\n";
    for (const auto &row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
