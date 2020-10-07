class Solution {
public:
    int multiply(int A, int B) {
        if (B == 0) {
            return 0;
        }

        return multiply(A, B - 1) + A;
    }
};