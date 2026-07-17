#include<bits/stdc++.h>
using namespace std;

// Sorted GCD Pair Queries
 
vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
    vector<int> gcdPairs;
    vector<int> ans;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            gcdPairs.push_back(gcd(nums[i], nums[j]));
         }
    }
    sort(gcdPairs.begin(), gcdPairs.end());
    for(int i = 0; i < queries.size(); i++){
        ans.push_back(gcdPairs[queries[i]]);
    }
    return ans;
}

int main(){
    vector<int> nums = {4,4,2,1};
    vector<long long> queries = {5,3,1,0};

    cout << " The sorted GCD pairs queries : " ;
    for(auto x : gcdValues(nums, queries)){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}