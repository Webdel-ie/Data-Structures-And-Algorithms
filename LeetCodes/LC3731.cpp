#include<bits/stdc++.h>
using namespace std;

// Find Missing Elements 

vector<int> findMissingElements(vector<int>& nums) {
    vector<int> ans;

    sort(nums.begin(), nums.end());

    int small = nums[0];
    int large = nums.back();

    int i = 0;

    while (small <= large) {
        if (i < nums.size() && nums[i] == small) {
            i++;
        } else {
            ans.push_back(small);
        }
        small++;
    }

     return ans;
}

int main(){
    vector<int> nums = {5, 1};

    cout << "The missing elements are: ";
    for(auto x : findMissingElements(nums)){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}