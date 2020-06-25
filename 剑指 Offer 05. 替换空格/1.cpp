class Solution {
public:
    string replaceSpace(string s) {
        string space = "%20";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                s = s.substr(0, i) + space + s.substr(i + 1, s.size() - 1);
            }
        }

        return s;
    }
};