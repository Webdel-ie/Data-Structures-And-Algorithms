#include<bits/stdc++.h>
using namespace std;

// Numbers of Unique XOR Triplets II

int uniqueXorTriplets(vector<int>& nums) {
    const int MAXX = 2048;

    vector<bool> present(MAXX, false);
     for (int x : nums) present[x] = true;

    // dp[t][x] = can obtain xor = x using exactly t picked values
    vector<vector<bool>> dp(4, vector<bool>(MAXX, false));
    dp[0][0] = true;

    for (int t = 0; t < 3; t++) {
        for (int xr = 0; xr < MAXX; xr++) {
            if (!dp[t][xr]) continue;
            for (int v = 0; v < MAXX; v++) {
                if (present[v]) {
                    dp[t + 1][xr ^ v] = true;
                }
            }
        }
    }

    int ans = 0;
    for (int xr = 0; xr < MAXX; xr++)
        if (dp[3][xr]) ans++;
    return ans;
}

int main() {
    vector<int> nums ={6,7,8,9};
    cout << " the number of unique XOR triplet values from all possible triplets (i, j, k) : " << uniqueXorTriplets(nums) << endl;
    return 0;
}