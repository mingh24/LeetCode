class Solution {
public:
    string filter(string s) {
        string result = "";

        for (int i = 0; i < s.size(); ++i) {
            if ('0' <= s[i] && s[i] <= '9')
                result.push_back(s[i]);
            else if ('a' <= s[i] && s[i] <= 'z')
                result.push_back(s[i]);
        }

        return result;
    }

    bool isPalindrome(string s) {
        if (s == "")
            return true;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string filteredString = filter(s);
        int size = filteredString.size();

        for (int i = 0; i < size / 2; ++i)
            if (filteredString[i] != filteredString[size - 1 - i])
                return false;

        return true;
    }
};