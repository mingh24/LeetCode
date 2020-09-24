class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> answer;

        if (nums.size() < 3) {
            return answer;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                int left = i + 1, right = nums.size() - 1;
                int sum = -nums[i];

                while (left < right) {
                    if (nums[left] + nums[right] == sum) {
                        vector<int> three{nums[i], nums[left], nums[right]};
                        answer.emplace_back(three);

                        left++;

                        while (left < right && nums[left] == nums[left - 1]) {
                            left++;
                        }

                        right--;

                        while (left < right && nums[right] == nums[right + 1]) {
                            right--;
                        }
                    } else if (nums[left] + nums[right] < sum) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return answer;
    }
};