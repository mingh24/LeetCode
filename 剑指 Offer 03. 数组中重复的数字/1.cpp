class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        unordered_set<int> num_set;

        for (const int &num : nums) {
            if (num_set.find(num) != num_set.end()) {
                return num;
            } else {
                num_set.emplace(num);
            }
        }

        return -1;
    }
};