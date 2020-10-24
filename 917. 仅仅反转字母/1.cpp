class Solution {
public:
    string reverseOnlyLetters(string S) {
        int left = 0, right = S.size() - 1;

        while (left < right) {
            while (left < right && !isLetter(S[left])) {
                left++;
            }

            while (left < right && !isLetter(S[right])) {
                right--;
            }

            myReverse(S, left, right);
            left++;
            right--;
        }

        return S;
    }

private:
    bool isLetter(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    void myReverse(string &S, int left, int right) {
        if (left < 0 || left >= S.size() || right < 0 || right >= S.size() || left >= right) {
            return;
        }

        S[left] ^= S[right];
        S[right] ^= S[left];
        S[left] ^= S[right];
    }
};