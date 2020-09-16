class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int max_num_1 = INT_MIN;
        int max_num_2 = INT_MIN;

        for (int &num : nums) {
            if (num > max_num_1) {
                max_num_2 = max_num_1;
                max_num_1 = num;
            } else if (num > max_num_2) {
                max_num_2 = num;
            }
        }

        return (max_num_1 - 1) * (max_num_2 - 1);
    }
};