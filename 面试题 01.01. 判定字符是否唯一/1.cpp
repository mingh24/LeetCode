class Solution {
public:
    bool isUnique(string astr) {
        int char_count[128]{0};

        for (char &ch : astr) {
            if (char_count[ch] > 0) {
                return false;
            } else {
                char_count[ch]++;
            }
        }

        return true;
    }
};