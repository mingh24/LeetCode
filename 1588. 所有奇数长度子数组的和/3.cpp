class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            int left_total = i + 1;
            int left_even = (left_total + 1) / 2;
            int left_odd = left_total / 2;
            int right_total = arr.size() - i;
            int right_even = (right_total + 1) / 2;
            int right_odd = right_total / 2;

            sum += (left_even * right_even + left_odd * right_odd) * arr[i];
        }

        return sum;
    }
};