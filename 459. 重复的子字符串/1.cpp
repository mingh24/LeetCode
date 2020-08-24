class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.size();

        for (int i = 1; i <= size / 2; i++) {
            if (size % i == 0) {
                bool match = true;

                for (int j = i; j < size; j++) {
                    if (s[j] != s[j - i]) {
                        match = false;
                        break;
                    }
                }

                if (match) {
                    return true;
                }
            }
        }

        return false;
    }
};