class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) {
            return "";
        }

        int size = strs.size();
        string answer = strs[0];

        for (int i = 1; i < size; i++) {
            answer = helper(answer, strs[i]);

            if (answer == "") {
                return "";
            }
        }

        return answer;
    }

private:
    string helper(string s1, string s2) {
        int min_length = min(s1.size(), s2.size());
        int common_length = 0;

        for (int i = 0; i < min_length; i++) {
            if (s1[i] != s2[i]) {
                break;
            } else {
                common_length++;
            }
        }

        return s1.substr(0, common_length);
    }
};