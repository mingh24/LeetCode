class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch = 0;

        for (int i = 0; i < s.size(); i++)
            ch ^= (s[i] ^ t[i]);

        return ch ^ t[t.size() - 1];
    }
};