class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int size = nums.size();
        int min = INT_MAX;
        int maxProfit = 0;
        for(int i=0; i<size; i++){
            if(nums[i] < min){
                min = nums[i];
            }else{
                int profit = nums[i] - min;

                if(maxProfit < profit){
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
    }
};
