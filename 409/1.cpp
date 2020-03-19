class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> char_map;
        int max_length = 0;

        for (char ch : s)
            ++char_map[ch];

        for (auto p : char_map) {
            int count = p.second;
            max_length += count / 2 * 2;
            if (count % 2 == 1 and max_length % 2 == 0)
                ++max_length;
        }

        return max_length;
    }
};