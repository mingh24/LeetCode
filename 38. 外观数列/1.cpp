class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        string previous = countAndSay(n - 1);
        string answer = "";
        int count = 1;

        for (int i = 0; i < previous.size(); i++) {
            if (previous[i + 1] == previous[i]) {
                count++;
            } else {
                answer += to_string(count) + previous[i];
                count = 1;
            }
        }

        return answer;
    }
};