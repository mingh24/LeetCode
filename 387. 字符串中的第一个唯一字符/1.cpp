class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> letter_count(26, 0);

        for (char &ch : s) {
            letter_count[ch - 'a']++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (letter_count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};