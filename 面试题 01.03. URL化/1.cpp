class Solution {
public:
    string replaceSpaces(string S, int length) {
        int space_count = 0;

        for (int i = 0; i < length; i++) {
            if (S[i] == ' ') {
                space_count++;
            }
        }

        int i = length - 1;
        int j = length + 2 * space_count - 1;

        S = S.substr(0, j + 1);

        while (i >= 0) {
            if (S[i] == ' ') {
                S[j--] = '0';
                S[j--] = '2';
                S[j--] = '%';
            } else {
                S[j--] = S[i];
            }
            i--;
        }

        return S;
    }
};