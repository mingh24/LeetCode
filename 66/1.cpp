class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            ++digits[i];
            digits[i] %= 10;
            if (digits[i] != 0)
                return digits;
        }

        vector<int> newDigits(digits.size() + 1);
        newDigits.at(0) = 1;

        return newDigits;
    }
};