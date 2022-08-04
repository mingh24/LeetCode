class Solution {
 public:
  int pivotIndex(vector<int>& nums) {
    int pivot = -1;
    int total_sum = 0;
    int left_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
      total_sum += nums[i];
    }

    for (int i = 0; i < nums.size(); i++) {
      if (left_sum * 2 == total_sum - nums[i]) {
        pivot = i;
        break;
      }

      left_sum += nums[i];
    }

    return pivot;
  }
};