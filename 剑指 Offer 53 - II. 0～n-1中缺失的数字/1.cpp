static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

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