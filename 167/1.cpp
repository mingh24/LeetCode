class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result;
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            if (numbers[left] > target - numbers[right])
                --right;
            if (numbers[left] < target - numbers[right])
                ++left;
            if (numbers[left] + numbers[right] == target) {
                result.push_back(left + 1);
                result.push_back(right + 1);
                break;
            }
        }

        return result;
    }
};