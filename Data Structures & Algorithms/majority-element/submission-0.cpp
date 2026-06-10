class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int size = nums.size();
        int count = 0;
        int max = 0;
        int maxNum = 0;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(max < count){
                max = count;
                maxNum = nums[i];
            }
            count = 0;
        }
        return maxNum;
    }
};