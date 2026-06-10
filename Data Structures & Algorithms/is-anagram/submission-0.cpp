class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> temp;
    for(char c : s){
        temp[c]++;
    }
    for(char c : t){
        temp[c]--;
    }
    for(auto c : temp){
        if(c.second != 0){
            return false;
        }
    }   
    return true;
    }
};
