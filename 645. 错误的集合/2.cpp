class Solution {
public:
    vector<int> findErrorNums(vector<int> &nums) {
        vector<int> answer;
        int size = nums.size();
        int missing_xor_duplicate = 0;

        for (int i = 0; i < size; i++) {
            missing_xor_duplicate ^= nums[i];
            missing_xor_duplicate ^= i + 1;
        }

        int flag = missing_xor_duplicate & (-missing_xor_duplicate); // 或 missing_xor_duplicate & ~(missing_xor_duplicate - 1)
        int xor1 = 0, xor2 = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] & flag) {
                xor1 ^= nums[i];
            } else {
                xor2 ^= nums[i];
            }

            if ((i + 1) & flag) {
                xor1 ^= i + 1;
            } else {
                xor2 ^= i + 1;
            }
        }

        for (int i = 0; i < size; i++) {
            if (nums[i] == xor1) {
                answer.emplace_back(xor1);
                answer.emplace_back(xor2);
                break;
            }

            if (nums[i] == xor2) {
                answer.emplace_back(xor2);
                answer.emplace_back(xor1);
                break;
            }
        }

        return answer;
    }
};