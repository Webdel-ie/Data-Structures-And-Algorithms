#include<bits/stdc++.h>
using namespace std;

// Smallest Palindromic Arrangement II

const long long LIM = 1000001;

long long mulCap(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    if (a > LIM / b) return LIM;
    return min(LIM, a * b);
}

long long countWays(vector<int>& freq) {
    int total = 0;
    for (int x : freq) total += x;

    long long res = 1;
    int rem = total;

    for (int f : freq) {
        if (f == 0) continue;

        long long cur = 1;
        for (int i = 1; i <= f; i++) {
            cur = cur * (rem - f + i) / i;
            if (cur > LIM) cur = LIM;
        }

        res = mulCap(res, cur);
        rem -= f;

        if (res >= LIM) return LIM;
    }

    return min(res, LIM);
}

string smallestPalindrome(string s, int k) {
    vector<int> cnt(26, 0);

    for (char c : s)
        cnt[c - 'a']++;

     vector<int> halfFreq(26, 0);
    string mid = "";

    for (int i = 0; i < 26; i++) {
        halfFreq[i] = cnt[i] / 2;
        if (cnt[i] & 1)
            mid.push_back(char('a' + i));
    }

    if (countWays(halfFreq) < k)
        return "";

    int halfLen = s.size() / 2;
    string half = "";

    for (int pos = 0; pos < halfLen; pos++) {
        for (int c = 0; c < 26; c++) {
            if (halfFreq[c] == 0)
                continue;

            halfFreq[c]--;

            long long ways = countWays(halfFreq);

            if (ways >= k) {
                half.push_back(char('a' + c));
                break;
            }
            k -= ways;
            halfFreq[c]++;
        }
    }

    string rev = half;
    reverse(rev.begin(), rev.end());

    return half + mid + rev;
}

int main() {
    string s = "abba";
    int k = 2;

    cout << "the k-th lexicographically smallest palindromic permutation of s :" << smallestPalindrome(s, k) << endl;

    return 0;
}