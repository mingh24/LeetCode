class Solution {
public:
    int multiply(int A, int B) {
        int answer = 0;

        while (B) {
            if (B & 1) {
                answer += A;
            }

            A <<= 1;
            B >>= 1;
        }

        return answer;
    }
};