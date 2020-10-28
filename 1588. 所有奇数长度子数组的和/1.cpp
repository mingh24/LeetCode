class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i; j < arr.size(); j += 2) {
                sum += helper(arr, i, j);
            }
        }

        return sum;
    }

private:
    int helper(vector<int> &arr, int begin, int end) {
        if (begin < 0 || begin >= arr.size() || end < 0 || end >= arr.size() || begin > end) {
            return 0;
        }

        int sum = 0;

        for (int i = begin; i <= end; i++) {
            sum += arr[i];
        }

        return sum;
    }
};