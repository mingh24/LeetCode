class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> answer;
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            if (numbers[left] == target - numbers[right]) {
                answer.emplace_back(left + 1);
                answer.emplace_back(right + 1);
                break;
            } else if (numbers[left] < target - numbers[right]) {
                left++;
            } else {
                right--;
            }
        }

        return answer;
    }
};