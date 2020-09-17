class Solution {
public:
    bool canPermutePalindrome(string s) {
        int char_count[128]{0};
        int odd_occurrence_count = 0;

        for (char &ch : s) {
            char_count[ch]++;
        }

        for (int i = 0; i < 128; i++) {
            if (char_count[i] & 1) {
                odd_occurrence_count++;
            }

            if (odd_occurrence_count > 1) {
                return false;
            }
        }

        return true;
    }
};