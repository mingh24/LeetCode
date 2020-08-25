class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;
        int size = s.size();
        bitset<128> char_set;
        int right_bound = 0;

        for (int i = 0; i < size; i++) {
            if (i != 0) {
                char_set[s[i - 1]] = 0;
            }

            while (right_bound < size && !char_set[s[right_bound]]) {
                char_set[s[right_bound++]] = 1;
            }

            answer = max(answer, right_bound - i);
        }

        return answer;
    }
};