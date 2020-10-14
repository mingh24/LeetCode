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
        vector<bool> dp(half_sum + 1, false);

        for (int i = 0; i < nums.size(); i++) {
            for (int s = half_sum; s >= 0; s--) {
                if (i == 0) {
                    dp[s] = (nums[i] == s);
                } else {
                    dp[s] = dp[s] | (s - nums[i] >= 0 ? dp[s - nums[i]] : false);
                }
            }
        }

        return dp[half_sum];
    }
};