class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return helper(s, t) && helper(t, s);
    }

private:
    bool helper(string s, string t) {
        int size = s.size();

        if (size <= 1) {
            return true;
        }

        unordered_map<char, char> char_map;

        for (int i = 0; i < size; i++) {
            if (char_map.find(s[i]) != char_map.end()) {
                if (char_map[s[i]] != t[i]) {
                    return false;
                }
            } else {
                char_map[s[i]] = t[i];
            }
        }

        return true;
    }
};