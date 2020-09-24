class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        int answer = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                int left = i + 1, right = nums.size() - 1;

                while (left < right) {
                    if (abs(nums[i] + nums[left] + nums[right] - target) < abs(answer - target)) {
                        answer = nums[i] + nums[left] + nums[right];
                    }

                    if (nums[left] + nums[right] == target - nums[i]) {
                        return answer;
                    } else if (nums[left] + nums[right] < target - nums[i]) {
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