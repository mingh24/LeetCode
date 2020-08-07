class Solution {
public:
    int search(vector<int> &nums, int target) {
        int answer = 0;
        int left = 0, right = nums.size() - 1;
        int middle = 0;

        while (left <= right) {
            middle = left + (right - left) / 2;

            if (nums[middle] == target) {
                answer++;
                break;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }

        if (!nums.empty() and nums[middle] == target) {
            int cursor = middle - 1;

            while (cursor >= 0 and nums[cursor] == target) {
                cursor--;
                answer++;
            }

            cursor = middle + 1;

            while (cursor < nums.size() and nums[cursor] == target) {
                cursor++;
                answer++;
            }
        }

        return answer;
    }
};