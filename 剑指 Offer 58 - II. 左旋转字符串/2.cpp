static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse_string(s, 0, n - 1);
        reverse_string(s, n, s.size() - 1);
        reverse_string(s, 0, s.size() - 1);

        return s;
    }

    void reverse_string(string &s, int left, int right) {
        while (left < right) {
            int temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
};