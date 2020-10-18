class Solution {
public:
    int titleToNumber(string s) {
        int answer = 0;
        int size = s.size();

        for (int i = 0; i < size; i++) {
            answer += (s[i] - 'A' + 1) * pow(26, size - 1 - i);
        }

        return answer;
    }
};