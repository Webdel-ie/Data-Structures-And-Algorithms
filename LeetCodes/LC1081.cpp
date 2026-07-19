#include<bits/stdc++.h>
using namespace std;

// Smallest Subsequence of Distinct Characters

string smallestSubsequence(string s) {
    vector<int> freq(26, 0);
    vector<bool> visited(26, false);

    // Count frequency of each character
    for (char c : s)
        freq[c - 'a']++;
    string ans = "";
    for (char c : s) {
        // One occurrence has been processed
        freq[c - 'a']--;
        // If already included, skip it
        if (visited[c - 'a'])
            continue;

        // Remove larger characters if they appear later
        while (!ans.empty() &&
               ans.back() > c &&
               freq[ans.back() - 'a'] > 0) {
            visited[ans.back() - 'a'] = false;
            ans.pop_back();
        }

        ans.push_back(c);
        visited[c - 'a'] = true;
    }

    return ans;
}

int main() {
    string s = "cbacdcbc";

    cout << " The Smallest Subsequence of Distinct Characters is : " << smallestSubsequence(s) << endl;
    return 0;
}