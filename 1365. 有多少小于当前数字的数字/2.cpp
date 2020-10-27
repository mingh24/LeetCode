class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
        vector<int> answer;
        vector<int> num_count(101, 0);

        for (const int &num : nums) {
            num_count[num]++;
        }

        for (int i = 1; i < 101; i++) {
            num_count[i] += num_count[i - 1];
        }

        for (const int &num : nums) {
            if (num != 0) {
                answer.emplace_back(num_count[num - 1]);
            } else {
                answer.emplace_back(0);
            }
        }

        return answer;
    }
};