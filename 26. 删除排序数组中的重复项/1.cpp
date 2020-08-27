class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int size = nums.size();

        for (int i = 1; i < size; i++) {
            if (nums[i] == nums[i - 1]) {
                for (int j = i; j < size - 1; j++) {
                    nums[j] = nums[j + 1];
                }

                size--;
                i--;
            }
        }

        return size;
    }
};