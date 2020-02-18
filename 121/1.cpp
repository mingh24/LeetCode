class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int minToBuy = INT_MAX;
        int maxIncome = 0;

        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < minToBuy)
                minToBuy = prices[i];
            else if (prices[i] - minToBuy > maxIncome)
                maxIncome = prices[i] - minToBuy;
        }

        return maxIncome;
    }
};