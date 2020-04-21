class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int i, j;

        for (i = 0, j = 0; i < nums.size(); i++) {
            if (nums[i])
                nums[j++] = nums[i];
        }

        while (j < nums.size()) {
            nums[j++] = 0;
        }
    }
};