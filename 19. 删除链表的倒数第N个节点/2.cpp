class Solution {
public:
    int titleToNumber(string s) {
        int answer = 0;
        int size = s.size();

        for (char &c : s) {
            answer *= 26;
            answer += c - 'A' + 1;
        }

        return answer;
    }
};