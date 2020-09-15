class Solution {
public:
    char findTheDifference(string s, string t) {
        char answer = 0;

        for (char &ch : s) {
            answer ^= ch;
        }

        cout << answer << endl;

        for (char &ch : t) {
            answer ^= ch;
        }

        return answer;
    }
};