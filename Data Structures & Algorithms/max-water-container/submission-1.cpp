class Solution {
public:
    int maxArea(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        int right = size-1;
        int maxArea = 0;

        while(left < right){
            int len = min(nums[left], nums[right]);
            int bred = (right-left);
            int area = len*bred;
            maxArea = max(maxArea, area);

            if(nums[left]<nums[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};
