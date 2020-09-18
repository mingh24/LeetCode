class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;

        do {
            slow = getSquareSum(slow);
            fast = getSquareSum(getSquareSum(fast));
        } while (slow != fast);

        return slow == 1;
    }

private:
    int getSquareSum(int n) {
        int result = 0;

        while (n) {
            result += pow(n % 10, 2);
            n /= 10;
        }

        return result;
    }
};