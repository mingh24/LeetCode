class Solution {
public:
    int add(int a, int b) {
        int sum = a ^ b;
        int carry = ((unsigned)(a & b)) << 1;

        return carry == 0 ? sum : add(sum, carry);
    }
};