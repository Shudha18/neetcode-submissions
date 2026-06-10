class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Brute Force Approach
        // int size = nums.size();
        // int count = 0;
        // int maxNum = 0;
        // int max = 0;
        // for(int i=0; i<size; i++){
        //     for(int j=0; j<size; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }

        //     if(count > max){
        //         max = count;
        //         maxNum = nums[i];
        //     }
        //     count = 0;
        // }
        // return maxNum;




        // Moore's Voting Algorithm:

        int count = 0;
        int candi = 0;
        for(int i : nums){
            if(count == 0) candi = i;
            if(candi == i){
                count++;
            }else{
                count--;
            }
        }
        return candi;








    }
};