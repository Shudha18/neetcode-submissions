class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int max = 0;
        for(int i : nums){
            if(max < i){
                max = i;
            }
        }
        for(int i=0; i<max; i++){
            if(find(nums.begin(), nums.end(), i) == nums.end()){
                return i;
            }
        }
        return max+1;
    }
};
