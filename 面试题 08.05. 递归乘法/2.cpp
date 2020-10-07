class Solution {
public:
    int multiply(int A, int B) {
        return helper(static_cast<long>(A), B);
    }

private:
    int helper(long A, int B) {
        if (B == 0) {
            return 0;
        }

        return B & 1 ? multiply(A + A, B >> 1) + A : multiply(A + A, B >> 1);
    }
};