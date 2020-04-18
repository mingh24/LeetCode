class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letter_count[26]{0};

        for (char ch : magazine)
            letter_count[ch - 'a']++;

        for (char ch : ransomNote) {
            if (letter_count[ch - 'a'] == 0)
                return false;
            else
                letter_count[ch - 'a']--;
        }

        return true;
    }
};