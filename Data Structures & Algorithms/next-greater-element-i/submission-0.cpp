class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2= nums2.size();
        vector<int> res;

        for(int i=0; i<size1; i++){
            int index = -1;
            for(int j=0; j<size2; j++){
                if(nums1[i] == nums2[j]){
                    index = j;
                }
            }

            int next = -1;
            for(int j=index+1; j<size2; j++){
                if(nums1[i] < nums2[j]){
                    next = nums2[j];
                    break;
                }
            }

            res.push_back(next);
        }
        return res;
    }
};