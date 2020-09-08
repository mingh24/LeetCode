class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> num_set;

        for (int &num : nums) {
            if (num_set.find(num) != num_set.end()) {
                return true;
            }

            num_set.emplace(num);
        }

        return false;
    }
};