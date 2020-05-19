class Solution {
public:
    bool checkPalindrome(const string &s, int left, int right) {
        for (int i = left, j = right; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return checkPalindrome(s, left, right - 1) || checkPalindrome(s, left + 1, right);
            }
        }
        return true;
    }
};