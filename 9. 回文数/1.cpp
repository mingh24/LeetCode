class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int y = x;
        int digit_num = 0;

        while (y) {
            y /= 10;
            digit_num++;
        }

        int times = digit_num / 2;

        for (int i = 0; i < times; i++) {
            int highest = x / pow(10, digit_num - 1);
            int lowest = x % 10;

            if (highest != lowest) {
                return false;
            }

            x -= highest * pow(10, digit_num - 1);
            x /= 10;
            digit_num -= 2;
        }

        return true;
    }
};