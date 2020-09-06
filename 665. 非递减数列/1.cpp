class Solution {
public:
    bool checkPossibility(vector<int> &nums) {
        int size = nums.size();

        if (size <= 2) {
            return true;
        }

        int count = 0;
        vector<int> nums_copy(nums);

        for (int i = 1; i < size; i++) {
            if (nums_copy[i - 1] > nums_copy[i]) {
                count++;

                if (count >= 2) {
                    return false;
                }

                if (i - 2 >= 0 && nums[i - 2] > nums_copy[i]) {
                    nums_copy[i] = nums_copy[i - 1];
                } else {
                    nums_copy[i - 1] = nums_copy[i];
                }
            }
        }

        return true;
    }
};