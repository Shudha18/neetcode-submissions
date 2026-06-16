class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int size = nums.size();
      unordered_map<int, int> temp;
      for(int i : nums){
        temp[i]++;
      }

      for(auto i : temp){
        if(i.second > 1){
            return true;
        }
      }
      return false;
    }
};