class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        int a[2001]{0}, b[1000]{0};

        for (int num : arr) {
            if (num >= 0) {
                a[num]++;
            } else {
                a[abs(num) + 1000]++;
            }
        }

        for (int i = 0; i < 2001; i++) {
            if (a[i] > 0) {
                if (b[a[i]] >= 1) {
                    return false;
                }

                b[a[i]]++;
            }
        }

        return true;
    }
};