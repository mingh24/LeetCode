class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int answer = nums[0];
        int size = nums.size();
        int count = 1;

        for (int i = 1; i < size; i++) {
            if (nums[i] == answer) {
                count++;
            } else {
                count--;

                if (count == 0) {
                    answer = nums[i];
                    count = 1;
                }
            }
        }

        return answer;
    }
};