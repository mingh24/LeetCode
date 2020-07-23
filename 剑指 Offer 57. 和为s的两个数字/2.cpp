static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
};

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer;
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] > target - nums[right]) {
                right--;
            } else if (nums[left] < target - nums[right]) {
                left++;
            } else {
                answer.emplace_back(nums[left]);
                answer.emplace_back(nums[right]);
                break;
            }
        }

        return answer;
    }
};