class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maxIncome = 0;
        for (int i = 1; i < prices.size(); ++i)
            if (prices[i] > prices[i - 1])
                maxIncome += prices[i] - prices[i - 1];

        return maxIncome;
    }
};