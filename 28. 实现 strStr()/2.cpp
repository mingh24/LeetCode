class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int h_size = haystack.size(), n_size = needle.size();
        unordered_map<char, int> offset_map;

        for (int i = 0; i < n_size; i++) {
            offset_map[needle[i]] = n_size - i;
        }

        int j = 0;

        while (j <= h_size - n_size) {
            if (haystack.substr(j, n_size) == needle) {
                return j;
            } else {
                if (offset_map.find(haystack[j + n_size]) != offset_map.end()) {
                    j += offset_map[haystack[j + n_size]];
                } else {
                    j += n_size + 1;
                }
            }
        }

        return -1;
    }
};