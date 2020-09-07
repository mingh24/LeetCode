class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int size = prices.size();
        int min_to_buy = INT_MAX;
        int max_profit = 0;

        for (int i = 0; i < size - 1; i++) {
            min_to_buy = min(min_to_buy, prices[i]);

            if (prices[i + 1] > min_to_buy) {
                max_profit = max(max_profit, prices[i + 1] - min_to_buy);
            }
        }

        return max_profit;
    }
};