class Solution {
public:
    int getLast(int n, int m) {
        if (n == 1)
            return 0;

        int last_deleted = getLast(n - 1, m);
        return (last_deleted + 1 + (m - 1) % n) % n;
    }

    int lastRemaining(int n, int m) {
        return getLast(n, m);
    }
};