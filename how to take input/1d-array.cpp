// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

// string input = pine,apple,subrta,ankus month motu
vector<string> parseInput()
{
    vector<string> words;
    string line;
    getline(cin, line); // Read entire input line

    // Replace all commas with spaces
    for (char &ch : line)
    {
        if (ch == ',')
            ch = ' ';
    }

    // Use stringstream to extract words
    stringstream ss(line);
    string word;
    while (ss >> word) // Read words separated by spaces
    {
        words.push_back(word);
    }

    return words;
}

// integer input = 1,2,3,4 5 6 7 8
int main()
{
    vector<int> v;
    string input;

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