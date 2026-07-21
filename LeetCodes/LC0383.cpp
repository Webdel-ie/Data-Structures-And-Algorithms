#include<bits/stdc++.h>
using namespace std;

// Ransom Note

bool canConstruct(string ransomNote, string magazine) {
    vector<int> freq(26, 0);

    // Count letters in magazine
    for (char ch : magazine) {
        freq[ch - 'a']++;
    }

    // Use letters for ransomNote
    for (char ch : ransomNote) {
        freq[ch - 'a']--;
        if (freq[ch - 'a'] < 0)
            return false;
    }

    return true;
}

int main() {
    string ransomNote = "aa";
    string magazine = "aab";

    bool m = canConstruct(ransomNote, magazine);

    cout << "Ransom Note can be constructed using Magazine :" << m << endl;
    return 0;
}