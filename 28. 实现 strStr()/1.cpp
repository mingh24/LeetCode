class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int h_size = haystack.size(), n_size = needle.size();

        for (int i = 0; i <= h_size - n_size; i++) {
            if (haystack[i] == needle[0]) {
                int start_index = i + 1;
                bool match = true;

                for (int j = 1; j < n_size; j++) {
                    if (haystack[start_index++] != needle[j]) {
                        match = false;
                        break;
                    }
                }

                if (match) {
                    return i;
                }
            }
        }

        return -1;
    }
};