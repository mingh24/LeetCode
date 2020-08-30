class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int size = s.size();

        while (i < size) {
            int start = i;

            while (i < size && s[i] != ' ') {
                i++;
            }

            int end = i - 1;

            while (start < end) {
                swap(s[start++], s[end--]);
            }

            i++;
        }

        return s;
    }
};