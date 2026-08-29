class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi = 0;
        int vote = 0;
        for(int i : nums){
            if(vote == 0){
                candi = i;
            }
            if(i==candi){
                vote++;
            }else{
                vote--;
            }
        }
        return candi;
    }
};