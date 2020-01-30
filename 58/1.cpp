class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] != ' ')
                ++size;
            else if (size)
                break;
        }

        return size;
    }
};