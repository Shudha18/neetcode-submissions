class Solution {
    bool check(string& s, int left, int right){
        int size = s.size();
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int size = s.size();
        int left = 0;
        int right = size-1;
        while(left < right){
            if(s[left] != s[right]){
                return check(s, left+1, right) || check(s, left, right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};