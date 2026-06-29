class Solution {
    int binary(int left, int right, int target, vector<int>& nums){
        if(left > right) return -1;

        int mid = left + (right - left)/2;
        if(nums[mid] == target) return mid;
        if(nums[mid] > target){
            return binary(left, mid-1, target, nums);
        }else{
            return binary(mid+1, right, target, nums);
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        return binary(left, right, target, nums);
    }
};
