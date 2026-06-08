class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for(char c : s){
            if(c == '{' || c == '(' || c == '['){
                temp.push(c);
            }else{
              if(temp.empty()) return false;
              if(c == '}' && temp.top() == '{' || 
               c == ')' && temp.top() == '(' || 
               c == ']' && temp.top() == '['){
                temp.pop();
                }else{
                    return false;
                }
            }
        }
        if(temp.empty()){
            return true;
        }
        return false;
    }
};
