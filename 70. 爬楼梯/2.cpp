class Solution {
public:
    int climbStairs(int n) {
        int p = 1, q = 1;

        for (int i = 1; i < n; i++) {
            int r = p + q;
            p = q;
            q = r;
        }

        return q;
    }
};