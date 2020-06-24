class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        unordered_map<int, int> num_count;

        for (int num : nums) {
            if (num_count.find(num) != num_count.end()) {
                return num;
            } else {
                num_count[num]++;
            }
        }

        return -1;
    }
};