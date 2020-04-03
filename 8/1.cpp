class Solution {
public:
    int myAtoi(string str) {
        int index = 0;
        int amount = 0;
        int size = str.size();

        while (isspace(str[index])) {
            ++index;
            if (index == size)
                return 0;
        }

        bool isPositive = true;
        if (isalpha(str[index])) {
            return 0;
        } else if (str[index] == '-') {
            isPositive = false;
            ++index;
        } else if (str[index] == '+') {
            ++index;
        }

        while (index < size) {
            if (!isdigit(str[index]))
                return isPositive ? amount : -amount;

            int current_num = str[index] - '0';

            if (amount > (INT_MAX - current_num) / 10)
                return isPositive ? INT_MAX : INT_MIN;

            amount = amount * 10 + current_num;

            ++index;
        }

        return isPositive ? amount : -amount;
    }
};