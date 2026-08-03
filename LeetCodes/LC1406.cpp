class Solution {
public:
    int solve(int idx, int n, vector<int> &stoneValue, vector<int> &dp) {
        if (idx >= n) {
            return 0;
        }

        if (dp[idx] != INT_MIN) {
            return dp[idx];
        }

        int first = stoneValue[idx] - solve(idx + 1, n, stoneValue, dp);

        int second = INT_MIN;
        if (idx + 1 < n) {
            second = stoneValue[idx] + stoneValue[idx + 1]
                     - solve(idx + 2, n, stoneValue, dp);
        }

        int third = INT_MIN;
        if (idx + 2 < n) {
            third = stoneValue[idx] + stoneValue[idx + 1] + stoneValue[idx + 2]
                    - solve(idx + 3, n, stoneValue, dp);
        }

        return dp[idx] = max(first, max(second, third));
    }

    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> dp(n + 1, INT_MIN);

        int ans = solve(0, n, stoneValue, dp);

        if (ans > 0) return "Alice";
        else if (ans == 0) return "Tie";
        else return "Bob";
    }
};