#include<bits/stdc++.h>
using namespace std;

// Minimum Number of Pushes to Type Word I

int minimumPushes(string word) {
    int ans = 0;
    int n = word.size();

    for (int i = 0; i < n; i++) {
        ans += (i / 8) + 1;
    }

    return ans;
}

int main(){
    string word = "abcde";
 
    cout << "the minimum number of pushes needed to type word after remapping the keys : " << minimumPushes(word) << endl;
    return 0;
}