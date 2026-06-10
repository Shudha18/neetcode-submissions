class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int size = prices.size();
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if((prices[j] < prices[i])) continue;
                if((prices[j] - prices[i]) > max){
                    max = (prices[j] - prices[i]);
                }
            }
        }
        return max;
    }
};
