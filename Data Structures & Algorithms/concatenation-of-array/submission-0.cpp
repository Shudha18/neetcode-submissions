class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> temp;
        for(int i : nums){
            temp.push_back(i);
        }

        for(int i : nums){
            temp.push_back(i);
        }
        return temp;
    }
};