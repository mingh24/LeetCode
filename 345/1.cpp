class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (vowels.find(s[left]) != vowels.end() and vowels.find(s[right]) != vowels.end()) {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;

                left++;
                right--;
            }

            if (vowels.find(s[left]) == vowels.end())
                left++;

            if (vowels.find(s[right]) == vowels.end())
                right--;
        }

        return s;
    }
};