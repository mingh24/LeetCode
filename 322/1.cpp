class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> result(amount + 1, amount + 1);
        result[0] = 0;

        for (int i = 0; i < result.size(); ++i) {
            for (int coin : coins) {
                if (i - coin < 0)
                    continue;

                result[i] = min(result[i], 1 + result[i - coin]);
            }
        }

        return result[amount] == amount + 1 ? -1 : result[amount];
    }
};