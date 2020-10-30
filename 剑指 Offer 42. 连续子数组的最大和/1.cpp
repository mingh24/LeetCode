class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        int answer = INT_MIN;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            answer = max(answer, sum);

            if (sum < 0) {
                sum = 0;
            }
        }

        return answer;
    }
};