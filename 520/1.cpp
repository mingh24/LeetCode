class Solution {
public:
    bool detectCapitalUse(string word) {
        int lower_num = 0;

        for (char ch : word) {
            if (ch >= 'a' and ch <= 'z')
                lower_num++;
        }

        if (word.size() - lower_num == 0)
            return true;

        if (lower_num == 0)
            return true;

        if (word.size() - lower_num == 1 and word[0] >= 'A' and word[0] <= 'Z')
            return true;

        return false;
    }
};