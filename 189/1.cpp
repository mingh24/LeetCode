class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        int size = nums.size();
        int x = k % size;

        for (int i = 0; i < size / 2; ++i) {
            int temp = nums[i];
            nums[i] = nums[size - i - 1];
            nums[size - i - 1] = temp;
        }

        for (int i = 0; i < x / 2; ++i) {
            int temp = nums[i];
            nums[i] = nums[x - i - 1];
            nums[x - i - 1] = temp;
        }

        for (int i = x; i < (x + size) / 2; ++i) {
            int temp = nums[i];
            nums[i] = nums[size - i - 1 + x];
            nums[size - i - 1 + x] = temp;
        }
    }
};