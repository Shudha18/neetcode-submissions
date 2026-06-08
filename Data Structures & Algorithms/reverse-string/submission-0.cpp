class Solution {
public:
    void reverseString(vector<char>& s) {
        int left, right;
        // left = 0;
        right = s.size()-1;

        for(int left=0; left<s.size()/2; left++){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            right -= 1;
        }
    }
};