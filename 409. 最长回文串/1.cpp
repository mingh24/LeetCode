class Solution {
 public:
  int longestPalindrome(string s) {
    int max_length = 0;
    int char_count[128]{0};

    for (int i = 0; i < s.size(); i++) {
      char_count[s[i]]++;
    }

    for (const auto& c : char_count) {
      if (c & 1 == 0) {
        max_length += c;
      } else {
        max_length += c / 2 * 2;
      }
    }

    if (max_length != s.size()) {
      max_length++;
    }

    return max_length;
  }
};