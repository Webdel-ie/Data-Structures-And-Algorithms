#include<bits/stdc++.h>
using namespace std;

// Number of Unique XOR Triplets I

int uniqueXorTriplets(vector<int>& nums) {
    int n = nums.size(); 
    if (n <= 2) return n; 
    int bits = 0; 
    while ((1 << bits) <= n) bits++; 
    return 1 << bits;
}

int main() {
    vector<int> nums = {3,1,2};
    cout << " The number of unique XOR triplet values from all possible triplets (i, j, k) : " << uniqueXorTriplets(nums) << endl;
    return 0;
}