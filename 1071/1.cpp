class Solution {
public:
    bool check(string part, string str) {
        int multiple = str.length() / part.length();
        string temp = "";
        for (int i = 0; i < multiple; ++i)
            temp += part;
        return temp == str;
    }

    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();

        for (int i = min(len1, len2); i >= 1; --i) {
            if (len1 % i == 0 && len2 % i == 0) {
                string part = str1.substr(0, i);
                if (check(part, str1) && check(part, str2))
                    return part;
            }
        }

        return "";
    }
};