class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long long copy = x;
        long long result = 0;

        while(copy){
            result = result * 10 + copy % 10;
            copy /= 10;
        }

        if (result == x)
            return true;

        return false;
    }
};
