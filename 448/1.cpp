static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;
        }

        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                answer.emplace_back(i + 1);
            }
        }

        return answer;
    }
};