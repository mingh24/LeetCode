class Solution {
public:
    string replaceSpaces(string S, int length) {
        int space_count = 0;

        for (int i = 0; i < length; i++) {
            if (S[i] == ' ') {
                space_count++;
            }
        }

        int back = length - 1;
        int new_back = back + 2 * space_count;

        while (back >= 0) {
            if (S[back] == ' ') {
                S[new_back--] = '0';
                S[new_back--] = '2';
                S[new_back--] = '%';
                back--;
            } else {
                S[new_back--] = S[back--];
            }
        }

        return S.substr(0, length + 2 * space_count);
    }
};