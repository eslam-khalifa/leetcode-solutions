class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = prices[0];
        int profit = 0;
        for(auto it : prices){
            profit = max(it - min_buy, profit);
            min_buy = min(it, min_buy);
        }
        return profit;
    }
};