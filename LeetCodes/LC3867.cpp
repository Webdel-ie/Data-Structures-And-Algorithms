#include<bits/stdc++.h>
using namespace std;

// Sum of GCD of formed pairs

long long gcdSum(vector<int>& nums) {
    long long gcdSums = 0;
    int maxi = INT_MIN;
    vector<int> prefixGcd;
    for(int i = 0; i < nums.size(); i++){
        maxi = max(maxi, nums[i]);
        prefixGcd.push_back(gcd(nums[i], maxi));
    }
    vector<int> pairs;
    sort(prefixGcd.begin(), prefixGcd.end());
        
    int l = 0;
    int r = prefixGcd.size() - 1;
    while(l < r){
        pairs.push_back(gcd(prefixGcd[l], prefixGcd[r]));
        l++;
        r--;
    }
    for(auto x : pairs){
        gcdSums += x;
    }
    return gcdSums;
}

int main(){
    vector<int> nums = {2, 6, 8};

    cout << "the sum of the GCD values of all formed pairs : " << gcdSum(nums) << endl;
    return 0;
}