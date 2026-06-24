class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k%=size;
        int left = 0;
        int right = size-1;

        while(left < right){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }

        left = 0;
        right = k-1;
        while(left < right){
            swap(nums[left], nums[right]);
            right--;
            left++;
        }

        left = k;
        right = size-1;
        while(left < right){
            swap(nums[left], nums[right]);
            right--;
            left++;
        }
    }
};