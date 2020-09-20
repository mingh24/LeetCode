class Solution {
public:
    int getSum(int a, int b) {
        int sum, carry;

        sum = a ^ b;
        carry = ((unsigned)(a & b) << 1);

        return carry == 0 ? sum : getSum(sum, carry);
    }
};