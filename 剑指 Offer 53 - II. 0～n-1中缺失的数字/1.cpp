class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int sum = (nums.size() + 1) * nums.size() / 2;

        for (int num : nums) {
            sum -= num;
        }

        return sum;
    }
};