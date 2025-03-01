// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string input;
    vector<int> v;

    // Read the entire line as input
    getline(cin, input);

    // Replace commas with spaces to standardize input
    for (char &c : input)
    {
        if (c == ',')
            c = ' ';
    }

    // Use stringstream to extract numbers
    stringstream ss(input);
    int num;
    while (ss >> num)
    {
        v.push_back(num);
    }

    // Output the processed matrix
    cout << "Processed Matrix:\n";
    for (const auto &i : v)
    {
        cout << i << " ";
    }

    return 0;
}
