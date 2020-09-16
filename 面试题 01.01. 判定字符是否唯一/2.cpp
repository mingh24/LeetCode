class Solution {
public:
    bool isUnique(string astr) {
        long low64 = 0;
        long high64 = 0;

        for (char &ch : astr) {
            if (ch >= 64) {
                if (high64 & (1l << (ch - 64))) {
                    return false;
                }

                high64 |= 1l << (ch - 64);
            } else {
                if (low64 & (1l << ch)) {
                    return false;
                }

                low64 |= 1l << ch;
            }
        }

        return true;
    }
};