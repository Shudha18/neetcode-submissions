class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(size, 0);
        for(int i=0; i<size; i++){
            int temp = 1;
            for(int j=0; j<size; j++){
                if(j == i) continue;
                temp*=nums[j];
            }
            res[i] = temp;
        }
        return res;
    }
};
