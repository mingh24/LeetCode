class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string answer;

        if (strs.empty()) {
            return answer;
        }

        int min_length = INT_MAX;
        int size = strs.size();

        for (int i = 0; i < size; i++) {
            min_length = min(min_length, (int)strs[i].size());
        }

        int common_length = 0;
        bool dismatch = false;

        for (int m = 0; m < min_length; m++) {
            for (int n = 1; n < size; n++) {
                if (strs[n][m] != strs[n - 1][m]) {
                    dismatch = true;
                    break;
                }
            }

            if (dismatch) {
                break;
            }

            common_length++;
        }

        answer = strs[0].substr(0, common_length);

        return answer;
    }
};