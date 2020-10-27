class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
        vector<int> answer;
        vector<int> num_count(101, 0);

        for (int i = 0; i < nums.size(); i++) {
            num_count[nums[i]]++;
        }

        int smaller_count = 0;

        for (int i = 0; i < 101; i++) {
            if (num_count[i] != 0) {
                int temp = num_count[i];
                num_count[i] = smaller_count;
                smaller_count += temp;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            answer.emplace_back(num_count[nums[i]]);
        }

        return answer;
    }
};