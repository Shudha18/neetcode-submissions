class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int size = nums.size();
        stack<int> temp;
        vector<int> res;
        for(int i : nums){
            bool destroyed = false;
            while(!temp.empty() && temp.top() > 0 && i < 0){
                if(temp.top() < -i){
                    temp.pop();
                }else if(temp.top() == -i){
                    temp.pop();
                    destroyed = true;
                    break;
                }else{
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed){
                temp.push(i);
            }
        }

        while(!temp.empty()){
            res.push_back(temp.top());
            temp.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};