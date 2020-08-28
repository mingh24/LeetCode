class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long reversed_x = 0;
        int temp = x;

        while (temp) {
            reversed_x = reversed_x * 10 + temp % 10;
            temp /= 10;
        }

        return reversed_x == x;
    }
};