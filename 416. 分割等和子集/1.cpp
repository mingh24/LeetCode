class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int sum = 0;

        for (const int &num : nums) {
            sum += num;
        }

        if (sum & 1) {
            return false;
        }

        int half_sum = (sum >> 1);
        vector<vector<bool>> dp(nums.size(), vector<bool>(half_sum + 1, false));

        for (int i = 0; i < nums.size(); i++) {
            for (int s = 0; s <= half_sum; s++) {
                if (i == 0) {
                    dp[i][s] = (nums[i] == s);
                } else {
                    dp[i][s] = dp[i - 1][s] | (s - nums[i] >= 0 ? dp[i - 1][s - nums[i]] : false);
                }
            }
        }

        return dp[nums.size() - 1][half_sum];
    }
};