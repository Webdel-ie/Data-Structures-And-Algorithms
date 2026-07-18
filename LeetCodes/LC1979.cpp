#include<bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
    int small_num = INT_MAX;
    int large_num = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > large_num){
            large_num = nums[i];
        }
        if(nums[i] < small_num){
            small_num = nums[i];
        }
    }
    return gcd(small_num, large_num);
}

int main() {
    vector<int> nums = {7, 5, 6, 8, 3};

    cout << " The greatest common divisor of the smallest number and largest number in nums " << findGCD(nums) << endl;
    return 0;
}