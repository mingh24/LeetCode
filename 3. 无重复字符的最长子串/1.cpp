class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) {
            return 0;
        }

        int answer = 1;
        int size = s.size();
        unordered_set<char> char_set;

        for (int i = 0; i < size; i++) {
            char_set.emplace(s[i]);
            int temp = 1;

            for (int j = i + 1; j < size; j++) {
                if (char_set.find(s[j]) == char_set.end()) {
                    char_set.emplace(s[j]);
                    temp++;
                } else {
                    break;
                }
            }

            answer = max(answer, temp);
            char_set.clear();
        }

        return answer;
    }
};