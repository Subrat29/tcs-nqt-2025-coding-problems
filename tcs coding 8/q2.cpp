#include <bits/stdc++.h>
using namespace std;

// Function to suggest words based on prefix
vector<string> autoSuggest(string query, vector<string>& words) {
    vector<string> ans;

    // Convert query to lowercase
    transform(query.begin(), query.end(), query.begin(), ::tolower);

    // Sort words lexicographically
    sort(words.begin(), words.end());

    // Check for words that start with the query
    for (const string& word : words) {
        string lowerWord = word;
        transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);

        if (lowerWord.find(query) == 0) { // If query is a prefix
            ans.push_back(word);
            if (ans.size() == 5) break; // Limit to 5 words
        }
    }
    return ans;
}

int main() {
    vector<string> words = {
        "apple", "Apricot", "application", "Apply", "aptitude", "apartment", "apex",
        "apology", "Appeal", "apron", "banana", "bandwidth", "bat", "battery",
        "barricade", "bargain", "basketball", "backbone", "background", "backup",
        "dog", "donut", "door", "Doctor", "document", "docker", "dolphin", "domain",
        "dormitory", "download", "zebra", "zero", "zigzag", "zodiac", "zombie"
    };

    vector<string> ans = autoSuggest("do", words);

    for (const string& word : ans) {
        cout << word << " ";
    }

    return 0;
}