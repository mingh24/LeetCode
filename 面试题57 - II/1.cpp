class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> answer;
        vector<int> temp;

        for (int left = 1, right = 2; left < right;) {
            int sum = (left + right) * (right - left + 1) / 2;

            if (sum == target) {
                temp.clear();
                for (int i = left; i <= right; ++i)
                    temp.emplace_back(i);
                answer.emplace_back(temp);
                ++left;
            } else if (sum < target)
                ++right;
            else
                ++left;
        }

        return answer;
    }
};