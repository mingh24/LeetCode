class Solution {
public:
    int countCharacters(vector<string> &words, string chars) {
        unordered_map<char, int> chars_map;
        for (int i = 0; i < chars.size(); ++i)
            if (chars_map.find(chars[i]) != chars_map.end())
                chars_map[chars[i]] += 1;
            else
                chars_map[chars[i]] = 1;

        int count = 0;
        for (string word : words) {
            unordered_map<char, int> word_map;
            for (int i = 0; i < word.size(); ++i)
                if (word_map.find(word[i]) != word_map.end())
                    word_map[word[i]] += 1;
                else
                    word_map[word[i]] = 1;

            count += word.size();
            for (unordered_map<char, int>::iterator iter = word_map.begin(); iter != word_map.end(); ++iter) {
                if ((chars_map.find(iter->first) == chars_map.end()) || chars_map[iter->first] < iter->second) {
                    count -= word.size();
                    break;
                }
            }
        }

        return count;
    }
};