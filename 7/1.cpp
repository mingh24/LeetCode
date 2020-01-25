class Solution {
public:
    int reverse(int x) {
        int copy = x;
        int result = 0;

        while (copy) {
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && copy % 10 > 7))
                return 0;
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && copy % 10 < -8))
                return 0;

            result = result * 10 + copy % 10;
            copy /= 10;
        }

        return result;
    }
};
