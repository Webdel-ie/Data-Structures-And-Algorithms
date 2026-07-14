#include<bits/stdc++.h>
using namespace std;

// Find the number of subsequences with equal GCD

int subsequencePairCount(vector<int>& nums) {

    static const int MOD = 1e9 + 7;

    const int MAX = 200;

    vector<vector<long long>> dp(MAX + 1, vector<long long>(MAX + 1, 0));
        dp[0][0] = 1;

    for (int x : nums) {

        vector<vector<long long>> ndp = dp;

        for (int g1 = 0; g1 <= MAX; g1++) {

            for (int g2 = 0; g2 <= MAX; g2++) {

                if (dp[g1][g2] == 0)
                    continue;

                long long ways = dp[g1][g2];

                // Put into seq1
                int ng1 = (g1 == 0) ? x : gcd(g1, x);

                ndp[ng1][g2] =
                    (ndp[ng1][g2] + ways) % MOD;

                // Put into seq2
                int ng2 = (g2 == 0) ? x : gcd(g2, x);

                ndp[g1][ng2] =
                    (ndp[g1][ng2] + ways) % MOD;
            }
        }

        dp = move(ndp);
    }

    long long ans = 0;

    for (int g = 1; g <= MAX; g++) {

        ans = (ans + dp[g][g]) % MOD;
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 1, 1};

    cout << " The number of subsequences with equal GCD are : " << subsequencePairCount(nums) << endl;

    return 0;
}
