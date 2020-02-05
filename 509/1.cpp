class Solution {
public:
    int fib(int N) {
        if (N <= 1)
            return N;

        int first = 1;
        int second = 1;
        for (int i = 3; i <= N; ++i) {
            int third = first + second;
            first = second;
            second = third;
        }

        return second;
    }
};