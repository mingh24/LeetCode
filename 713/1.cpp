class Solution {
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k) {
        int answer = 0;

        if (k <= 1) {
            return answer;
        }

        int left = 0, right = 0;
        int product = 1;

        for (right = 0; right < nums.size(); right++) {
            product *= nums[right];

            while (left <= right and product >= k) {
                product /= nums[left++];
            }

            answer += right - left + 1;
        }

        return answer;
    }
};