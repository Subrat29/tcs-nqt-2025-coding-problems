#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

// n - string size
// m - words size
// l - avg word size

// tc: n.m.l or m^n
// sc: n

int ans = INT_MAX;

void dfs(string s, vector<string> &words, int mini)
{
    if (s.empty())
    {
        ans = min(ans, mini);
        return;
    }

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
    string s = "applepie";
    vector<string> words = {"apple", "pie", "applepie"};

    dfs(s, words, 0);

    cout << (ans == INT_MAX ? -1 : ans);

    return 0;
}