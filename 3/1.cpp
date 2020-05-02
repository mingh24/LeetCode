class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        unordered_set<char> letter_recorder;
        int begin, end;

        for (begin = 0, end = -1; begin < s.size(); begin++) {
            if (begin != 0)
                letter_recorder.erase(s[begin - 1]);

            while (end + 1 < s.size() and letter_recorder.find(s[end + 1]) == letter_recorder.end()) {
                letter_recorder.emplace(s[end + 1]);
                end++;
            }

            max_length = max(max_length, end - begin + 1);
        }

        return max_length;
    }
};