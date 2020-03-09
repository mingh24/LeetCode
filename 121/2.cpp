class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int minPrice = INT_MAX;
        int maxIncome = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxIncome = max(maxIncome, price - minPrice);
        }

        return maxIncome;
    }
};