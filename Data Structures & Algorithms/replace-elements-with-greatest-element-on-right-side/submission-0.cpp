class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        if(size==1) return {-1};
        vector<int> res(size, -1);
        int maxi = arr[size-1];
        for(int i=size-1; i>=0; i--){
            if(i == size-1) res[i] = -1;
            else{
                res[i] = maxi;
                maxi = max(maxi, arr[i]);
            }
        }
        return res;
    }
};