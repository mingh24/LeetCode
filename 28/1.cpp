class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;

        int hsize = haystack.size();
        int nsize = needle.size();
        int d = hsize - nsize;

        if (d < 0) {
            return -1;
        } else if (d == 0) {
            if (haystack == needle)
                return 0;
            else
                return -1;
        }

        bool flag = false;
        for (int i = 0; i < d + 1; ++i) {
            if (haystack[i] == needle[0]) {
                flag = true;
                for (int j = 1; j < nsize; ++j) {
                    if (haystack[i + j] != needle[j])
                        flag = false;
                }
            }
            if (flag)
                return i;
        }

        return -1;
    }
};