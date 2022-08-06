class Solution {
 public:
  bool isSubsequence(string s, string t) {
    if (s.size() > t.size()) {
      return false;
    }

    int si = 0;
    int ti = 0;

    while (si < s.size() && ti < t.size()) {
      if (s[si] == t[ti]) {
        si++;
      }

      ti++;
    }

    return si >= s.size();
  }
};