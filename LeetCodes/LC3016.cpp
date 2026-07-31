#include<bits/stdc++.h>
using namespace std;

// Minimum Number of Pushes to Type the Word II

int minimumPushes(string word) {
    vector<int> freq(26, 0);

    for (char c : word)
            freq[c - 'a']++;

    sort(freq.begin(), freq.end(), greater<int>());

    int ans = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) break;
        ans += freq[i] * (i / 8 + 1);
    }

    return ans; 
}

int main(){
    string word = "xyzxyzxyzxyz";
    cout << "the minimum number of pushes needed to type word after remapping the keys: " << minimumPushes(word) << endl;
    return 0;
}