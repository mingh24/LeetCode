class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int left = 0;
        int middle;
        int right = x / 2 + 1;
        while (left <= right) {
            middle = (left + right) / 2;
            if (middle == x / middle || (middle < x / middle && middle + 1 > x / (middle + 1)))
                return middle;
            else if (middle < x / middle)
                left = middle + 1;
            else if (middle > x / middle)
                right = middle - 1;
        }

        return -1;
    }
};