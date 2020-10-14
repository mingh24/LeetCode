class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int answer = 0;

        for (int i = 0; i < 32; i++) {
            int mask = 1 << i;
            int count = 0;

            for (const int &num : nums) {
                if (num & mask) {
                    count++;
                }
            }

            if (count % 3) {
                answer |= mask;
            }
        }

        return answer;
    }
};