class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string answer;

        if (strs.empty()) {
            return answer;
        }

        int size = strs.size();
        int length = strs[0].size();

        for (int i = 0; i < length; i++) {
            for (int j = 1; j < size; j++) {
                if (i == strs[j].size() || strs[j][i] != strs[0][i]) {
                    return answer;
                }
            }

            answer += strs[0][i];
        }

        return answer;
    }
};