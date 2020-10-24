class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] != i) {
                if (nums[nums[i]] == nums[i]) {
                    return nums[i];
                }

                mySwap(nums, i, nums[i]);
            }
        }

        return -1;
    }

private:
    void mySwap(vector<int> &nums, int i1, int i2) {
        if (i1 < 0 || i1 >= nums.size() || i2 < 0 || i2 >= nums.size() || i1 == i2) {
            return;
        }

        nums[i1] ^= nums[i2];
        nums[i2] ^= nums[i1];
        nums[i1] ^= nums[i2];
    }
};