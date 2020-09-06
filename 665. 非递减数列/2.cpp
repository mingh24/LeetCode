class Solution {
public:
    bool checkPossibility(vector<int> &nums) {
        int size = nums.size();

        if (size <= 2) {
            return true;
        }

        int count = 0;

        for (int i = 1; i < size; i++) {
            if (nums[i] < nums[i - 1]) {
                count++;

                if (count > 1) {
                    return false;
                }

                if (i - 2 >= 0 && i + 1 < size) {
                    if (nums[i - 2] > nums[i] && nums[i - 1] > nums[i + 1]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};