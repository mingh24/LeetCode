class Solution {
public:
    int add(int a, int b) {
        int temp;

        while (b) {
            temp = a;
            a = a ^ b;
            b = ((unsigned)(temp & b)) << 1;
        }

        return a;
    }
};