class Solution {
public:
    double myPow(double x, int n) {
        double answer = 1;
        bool is_negative = n < 0 ? true : false;
        n = abs(n);

        while (n) {
            if (n & 1) {
                answer *= x;
            }

            n /= 2;
            x *= x;
        }

        return is_negative ? 1 / answer : answer;
    }
};