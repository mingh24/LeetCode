class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        vector<int> answer;
        bitset<10001> b;
        int current_sum = 0;

        for (int &num : nums) {
            if (b.test(num)) {
                answer.emplace_back(num);
            } else {
                b.set(num);
            }

            current_sum += num;
        }

        int original_sum = nums.size() * (nums.size() + 1) / 2;

        answer.emplace_back(original_sum - current_sum + answer[0]);

        return answer;
    }
};