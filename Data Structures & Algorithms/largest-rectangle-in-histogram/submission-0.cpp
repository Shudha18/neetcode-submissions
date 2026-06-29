class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int size = nums.size();
        int res = 0;
        for(int i=0; i<size; i++){
            int minimum = nums[i];
            for(int j=i; j<size; j++){
                minimum = min(minimum, nums[j]);
                res = max(res, minimum*(j-i+1));
            }
        }
        return res;
    }
};
