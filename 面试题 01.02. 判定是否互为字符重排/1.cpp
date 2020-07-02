class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        unordered_map<char, int> char_count_map;

        for (char ch1 : s1) {
            char_count_map[ch1]++;
        }

        for (char ch2 : s2) {
            if (char_count_map.find(ch2) == char_count_map.end()) {
                return false;
            }

            char_count_map[ch2]--;
        }

        for (auto iter = char_count_map.begin(); iter != char_count_map.end(); iter++) {
            if (iter->second != 0) {
                return false;
            }
        }

        return true;
    }
};