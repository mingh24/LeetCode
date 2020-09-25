class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer = 0;
        bool has_last_word = false;

        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                has_last_word = true;
                answer++;
            } else if (s[i] == ' ') {
                if (has_last_word) {
                    break;
                }
            }
        }

        return answer;
    }
};