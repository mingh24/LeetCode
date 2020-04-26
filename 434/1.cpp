class Solution {
public:
    int countSegments(string s) {
        int count = 0;

        s += " ";

        bool hasWord = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                hasWord = true;
            } else {
                if (hasWord) {
                    hasWord = false;
                    count++;
                }
            }
        }

        return count;
    }
};