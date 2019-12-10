class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string longest = strs[0];

        for (int i = 0; i < longest.length(); ++i) {
            char c = longest[i];

            for (int j = 1; j < strs.size(); ++j) {
                if (i == strs[j].length() || strs[j][i] != c)
                    return longest.substr(0, i);
            }
        }

        return longest;
    }
};