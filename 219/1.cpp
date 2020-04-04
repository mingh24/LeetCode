class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        unordered_set<int> nums_set;
        int count = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums_set.find(nums[i]) != nums_set.end())
                return true;

            nums_set.insert(nums[i]);

            if (nums_set.size() > k)
                nums_set.erase(nums[i - k]);
        }

        return false;
    }
};