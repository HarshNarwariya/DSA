class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sold = 0;
        for (int i = 1; i < prices.size(); i++) {
            buy = (buy > prices[i]) ? prices[i]: buy;
            sold = max(sold, prices[i] - buy);
        }
        return sold;
    }
};