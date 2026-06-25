class Solution {
    bool binary(vector<int> nums, int target){
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target) return true;
            else if(nums[mid] > target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            if(binary(matrix[i], target)) return true;
        }
        return false;
    }
};
