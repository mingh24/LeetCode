class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        bool flag = false;

        while (j <= t.size()) {
            if (i >= s.size()) {
                return true;
            } else if (j >= t.size()) {
                return false;
            }

            if (s[i] == t[j]) {
                i++;
            }

            j++;
        }

        return false;
    }
};