class Solution {
public:
    int reverse(int x) {
        long answer = 0;

        while (x) {
            answer = answer * 10 + x % 10;
            x /= 10;
        }

        if (answer < INT_MIN || answer > INT_MAX) {
            return 0;
        }

        return answer;
    }
};