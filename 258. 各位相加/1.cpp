class Solution {
public:
    int addDigits(int num) {
        int temp = 0;

        while (num / 10 != 0) {
            while (num) {
                temp += num % 10;
                num /= 10;
            }

            num = temp;
            temp = 0;
        }

        return num;
    }
};