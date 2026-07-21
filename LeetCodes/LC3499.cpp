#include<bits/stdc++.h>
using namespace std;

// Maximize Acive Sections with Trade I

int maxActiveSection(string s) {
    int ones = 0;
    for( char c : s ) {
        if( c == '1') ones++;
    }
    string t = '1' + s + '1';
    vector<pair<char, int>> runs;
    for( char c : t ) {
        if(runs.empty() || runs.back().first != c) {
            runs.push_back({c, 1});
        } else {
            runs.back().second++;
        }
    }
    int ans = ones;
    for(int i = 1; i + 1 < runs.size(); i++) {
        if(runs[i].first == '1' && runs[i - 1].first == '0' && runs[i + 1].first == '0') {
            ans = max( ans, ones + runs[i - 1].second + runs[i + 1].second);
        }
    }
    return ans;
}

int main() {
    string s = "1000100";
    cout << " Maximum Number of Active Sections after Trade : " << maxActiveSection(s) << endl ;
    return 0;
}