class Solution {
public:
    vector<vector<int>>res;
    void helper(vector<int>& nums, int start, int target, vector<int>& temp){
        if(target == 0){
            res.push_back(temp);
            return;
        }
        if(target < 0 || start == nums.size()) return;
        temp.push_back(nums[start]);

        helper(nums, start, target-nums[start], temp);
        temp.pop_back();
        helper(nums, start+1, target, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        helper(nums, 0, target, temp);
        return res;
    }
};
