class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;
        int size = nums.size();
        for(int i=0; i<size; i++){
            int res = target - nums[i];
            if(temp.find(res) != temp.end()){
                return {temp[res], i};
            }
            temp[nums[i]] = i;
        }
        return {};
    }
};
