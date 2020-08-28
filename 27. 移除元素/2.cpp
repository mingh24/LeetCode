class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] != val) {
                left++;
            } else {
                swap(nums[left], nums[right--]);
            }  
        }

        return left;
    }
};