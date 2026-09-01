class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(string str : strs){
            string og = str;
            sort(og.begin(), og.end());
            mp[og].push_back(str);
        }
        vector<vector<string>>res;
        for(auto& i : mp){
            res.push_back(i.second);
        }
        return res;
    }
};
