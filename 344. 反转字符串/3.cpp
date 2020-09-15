class Solution {
public:
    void reverseString(vector<char> &s) {
        myReverse(s, 0, s.size() - 1);
    }

private:
    void myReverse(vector<char> &s, int begin, int end) {
        if (begin >= end) {
            return;
        }

        myReverse(s, begin + 1, end - 1);

        s[begin] ^= s[end];
        s[end] ^= s[begin];
        s[begin] ^= s[end];
    }
};