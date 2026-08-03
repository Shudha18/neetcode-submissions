class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0;
        int right = size-1;
        while(left < right){
            int sum = nums[left]+nums[right];
            if(sum == target) return {left+1, right+1};
            else if(sum < target){
                left++;
            }else right--;
        }
        return {};
    }
};
