#include<bits/stdc+.h>
using namespace std;

// Smallest Palindromic Arrangement I

string smallestPalindrome(string s) {
    int n = s.size();
     int mid = n/2;
    sort(begin(s), begin(s) + mid);

    for(int i = 0; i < mid; i++) {
        s[n-1-i] = s[i];
    }
    return s;
}

int main() {
    string s = "daccad";
    cout << "Lexicographically smallest palindromic arrangement of " << s << "is : " << smallestPalindrome(s) << endl;
}