#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>
#include <sstream>
using namespace std;

// n - string size
// m - words size
// l - avg word size

// tc: n.m.l
// sc: n^2

int ans = INT_MAX;
unordered_map<string, int> memo;

void dfs(string s, vector<string> &words, int mini)
{
    if (s.empty())
    {
        ans = min(ans, mini);
        return;
    }

    if (memo.find(s) != memo.end() && memo[s] <= mini)
        return;

    memo[s] = mini;

    int s_len = s.size();
    for (int i = 0; i < words.size(); i++)
    {
        string w = words[i];
        int n = w.size();

        if (s[0] != w[0])
            continue;

        int j = 0;
        while (j < n && j < s_len && s[j] == w[j])
        {
            j++;
        }

        if (j != n)
            continue;

        dfs(s.substr(j, s_len - j), words, mini + 1);
    }
}

int main()
{
    // string s = "applepie";
    // vector<string> words = {  "apple", "pie", "applepie"};

    // Taking input
    string s;
    getline(cin, s);

    string input;
    getline(cin, input);
    for (char &c : input)
    {
        if (c == ',')
            c = ' ';
    }

    stringstream ss(input);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    dfs(s, words, 0);

    cout << (ans == INT_MAX ? -1 : ans);

    return 0;
}
