class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0;
        vector<int> previous_sum{0};

        for (const int &num : arr) {
            previous_sum.emplace_back(previous_sum.back() + num);
        }

        for (int i = 0; i < arr.size(); i++) {
            for (int j = 1; i + j < previous_sum.size(); j += 2) {
                sum += previous_sum[i + j] - previous_sum[i];
            }
        }

        return sum;
    }
};