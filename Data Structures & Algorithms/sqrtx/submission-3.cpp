class Solution {
public:
    int mySqrt(int x) {
        int res = 0;
        if(x==1 || x==0){
            return x;
        }

        for(long long i=0; i<=x; i++){
            if(i*i <= x){
                res = i;
            }else{
                break;
            }
        }
        return res;
    }
};