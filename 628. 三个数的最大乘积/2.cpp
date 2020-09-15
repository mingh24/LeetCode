class Solution {
public:
    int maximumProduct(vector<int> &nums) {
        int max_num_1 = INT_MIN;
        int max_num_2 = INT_MIN;
        int max_num_3 = INT_MIN;
        int min_num_1 = INT_MAX;
        int min_num_2 = INT_MAX;

        for (int &num : nums) {
            if (num > max_num_1) {
                max_num_3 = max_num_2;
                max_num_2 = max_num_1;
                max_num_1 = num;
            } else if (num > max_num_2) {
                max_num_3 = max_num_2;
                max_num_2 = num;
            } else if (num > max_num_3) {
                max_num_3 = num;
            }

            if (num < min_num_1) {
                min_num_2 = min_num_1;
                min_num_1 = num;
            } else if (num < min_num_2) {
                min_num_2 = num;
            }
        }

        return max(max_num_1 * max_num_2 * max_num_3, max_num_1 * min_num_1 * min_num_2);
    }
};