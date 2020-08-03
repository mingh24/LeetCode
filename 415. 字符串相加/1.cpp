class Solution {
public:
    string addStrings(string num1, string num2) {
        string answer = "";
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;

        while (i >= 0 or j >= 0 or carry > 0) {
            if (i >= 0) {
                carry += num1[i--] - '0';
            }

            if (j >= 0) {
                carry += num2[j--] - '0';
            }

            answer += (carry % 10) + '0';
            carry /= 10;
        }

        for (int k = 0; k < answer.size() / 2; k++) {
            answer[k] ^= answer[answer.size() - 1 - k];
            answer[answer.size() - 1 - k] ^= answer[k];
            answer[k] ^= answer[answer.size() - 1 - k];
        }

        return answer;
    }
};