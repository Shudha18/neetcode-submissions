class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int right = size-1;
        int res=0;
        while(!isalnum(s[right])) right--;
        while(isalnum(s[right])){
            res++;
            right--;
        }
        return res;
    }
};