class Solution {
public:
    bool isPalindrome(int x) {
        char digits[1024];
        sprintf(digits, "%d", x);

        int length = strlen(digits);

        for (int i = 0; i < length / 2; ++i)
            if (digits[i] != digits[length - i - 1])
                return false;
        
        return true;
    }
};
