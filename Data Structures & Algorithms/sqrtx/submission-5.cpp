class Solution {
public:
    int mySqrt(int x) {
        // ===============
        // Binary Search
        // ===============

        int left = 1;
        int right = x;
        int ans = 0;
        while(left <= right){
            long long mid = left + (right - left)/2;
            if(mid*mid == x){
                return mid;
            }else if(mid*mid < x){
                ans = mid;
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        
        return ans;
        
        
        
        
        // ===============
        // Linear Search
        // ================
        
        // int res = 0;
        // if(x==1 || x==0){
        //     return x;
        // }

        // for(long long i=0; i<=x; i++){
        //     if(i*i <= x){
        //         res = i;
        //     }else{
        //         break;
        //     }
        // }
        // return res;
    }
};