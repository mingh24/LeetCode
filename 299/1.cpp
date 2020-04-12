class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0, b = 0;

        unordered_map<char, int> char_count;

        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i])
                a++;

            char_count[secret[i]]++;
        }

        for (auto ch : guess) {
            if (char_count[ch] > 0) {
                b++;
                char_count[ch]--;
            }
        }

        b -= a;

        return to_string(a) + 'A' + to_string(b) + 'B';
    }
};