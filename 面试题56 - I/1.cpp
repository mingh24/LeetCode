class Solution {
public:
    vector<int> singleNumbers(vector<int> &nums) {
        int x = 0;

        for (int num : nums)
            x ^= num;

        int flag = x & (-x);

        int y = 0;

        for (int num : nums)
            if ((num & flag) != 0)
                y ^= num;

        return vector<int>{y, x ^ y};
    }
};