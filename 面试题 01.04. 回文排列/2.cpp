class Solution {
public:
    bool canPermutePalindrome(string s) {
        bitset<128> b;

        for (char &ch : s) {
            b.flip(ch);
        }

        return b.count() <= 1;
    }
};