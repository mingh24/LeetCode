class Solution {
public:
    bool canThreePartsEqualSum(vector<int> &A) {
        int sum = std::accumulate(A.begin(), A.end(), 0);

        if (sum % 3 != 0)
            return false;

        int part_sum = sum / 3;
        int current_sum = 0;
        int count = 0;

        for (int num : A) {
            current_sum += num;
            if (current_sum == part_sum) {
                ++count;
                current_sum = 0;
            }
        }

        return count >= 3;
    }
};