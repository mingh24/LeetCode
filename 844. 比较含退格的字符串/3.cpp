class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i = S.size() - 1;
        int j = T.size() - 1;
        int S_backspace = 0;
        int T_backspace = 0;

        while (true) {
            while (i >= 0) {
                if (S[i] == '#') {
                    S_backspace++;
                } else {
                    if (S_backspace > 0) {
                        S_backspace--;
                    } else {
                        break;
                    }
                }

                i--;
            }

            while (j >= 0) {
                if (T[j] == '#') {
                    T_backspace++;
                } else {
                    if (T_backspace > 0) {
                        T_backspace--;
                    } else {
                        break;
                    }
                }

                j--;
            }

            if (i < 0 || j < 0) {
                break;
            }

            if (S[i] != T[j]) {
                return false;
            }

            i--;
            j--;
        }

        return i == -1 && j == -1;
    }
};