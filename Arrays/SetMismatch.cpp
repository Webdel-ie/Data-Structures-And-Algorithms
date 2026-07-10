#include<bits/stdc++.h>
using namespace std;

// Find duplicate and missing numbers in an array and return them in an array.

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int duplicate = -1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            duplicate = nums[i];
            break;
        }
    }

    int sum1 = n * (n + 1) / 2;
    int sum2 = 0;

    for (int x : nums)
        sum2 += x;

    int missing = sum1 - sum2 + duplicate;

    return {duplicate, missing};
}


int main(){
    vector<int> nums = {1, 2, 2, 4};

    cout << "The duplicate and missing numbers are: ";
    for(auto x : findErrorNums(nums)){
        cout << x << " ";
    }

    return 0;
}