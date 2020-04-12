class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0, b = 0;

        int secret_count[10]{0};
        int guess_count[10]{0};

        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                a++;
            } else {
                secret_count[secret[i] - '0']++;
                guess_count[guess[i] - '0']++;
            }
        }

        for (int j = 0; j < 10; j++)
            b += min(secret_count[j], guess_count[j]);

        return to_string(a) + 'A' + to_string(b) + 'B';
    }
};