// Find Missing Elements 

class Solution {
public:
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
};