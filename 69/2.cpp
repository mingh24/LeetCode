class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return 0;

        double c = x, x0 = x;

        while (true) {
            double xi = 0.5 * (x0 + c / x0);

            if (fabs(x0 - xi) < 1e-7)
                break;

            x0 = xi;
        }

        return static_cast<int>(x0);
    }
};