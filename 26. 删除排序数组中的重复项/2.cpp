class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        int i = 1, j = 1;

        while (i < nums.size()) {
            if (nums[i] != nums[i - 1]) {
                nums[j++] = nums[i++];
            } else {
                i++;
            }
        }

        return j;
    }
};