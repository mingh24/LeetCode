class Solution {
public:
    int tribonacci(int n) {
        if (n <= 1) {
            return n;
        }

        int a = 0, b = 1, c = 1;
        int d;

        for (int i = 2; i < n; i++) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }

        return c;
    }
};