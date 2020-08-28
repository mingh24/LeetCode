class Solution {
public:
    int myAtoi(string str) {
        long answer = 0;
        bool negative = false;
        int start_index = str.size();

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                continue;
            } else if (str[i] == '+') {
                start_index = i + 1;
                break;
            } else if (str[i] == '-') {
                start_index = i + 1;
                negative = true;
                break;
            } else if (str[i] >= '0' && str[i] <= '9') {
                start_index = i;
                break;
            } else {
                break;
            }
        }

        for (int j = start_index; j < str.size(); j++) {
            if (str[j] >= '0' && str[j] <= '9') {
                int digit = (str[j] - '0') % 10;

                if (negative) {
                    answer = answer * 10 - digit;

                    if (answer <= INT_MIN) {
                        return INT_MIN;
                    }
                } else {
                    answer = answer * 10 + digit;

                    if (answer >= INT_MAX) {
                        return INT_MAX;
                    }
                }
            } else {
                break;
            }
        }

        return answer;
    }
};