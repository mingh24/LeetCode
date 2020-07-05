class Solution {
public:
    string reverseLeftWords(string s, int n) {
        int index = (n - 1) % s.size();

        return s.substr(index + 1, s.size()) + s.substr(0, index + 1);
    }
};