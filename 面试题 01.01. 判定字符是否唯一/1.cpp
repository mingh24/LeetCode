class Solution {
public:
    bool isUnique(string astr) {
        int mark = 0;

        for (char ch : astr) {
            int move_count = ch - 'a';

            if ((mark & (1 << move_count)) != 0) {
                return false;
            } else {
                mark |= (1 << move_count);
            }
        }

        return true;
    }
};