class Solution {
public:
    int countCharacters(vector<string> &words, string chars) {
        int chars_hash[26]{0};
        for (char ch : chars)
            ++chars_hash[ch - 'a'];

        int count = 0;
        for (string word : words) {
            int word_hash[26]{0};
            for (char ch : word)
                ++word_hash[ch - 'a'];

            bool flag = true;
            for (int i = 0; i < 26; ++i)
                if (chars_hash[i] < word_hash[i])
                    flag = false;

            if (flag)
                count += word.size();
        }

        return count;
    }
};