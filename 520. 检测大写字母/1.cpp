class Solution {
public:
    bool detectCapitalUse(string word) {
        int lower_case_count = 0;
        int size = word.size();

        for (char &ch : word) {
            if (ch >= 'a' && ch <= 'z') {
                lower_case_count++;
            }
        }

        if (lower_case_count == size) {
            return true;
        }

        if (lower_case_count == 0) {
            return true;
        }

        if (word[0] >= 'A' && word[0] <= 'Z' && lower_case_count == size - 1) {
            return true;
        }

        return false;
    }
};