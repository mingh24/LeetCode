class Solution {
public:
    string compressString(string S) {
        string compressed_S = "";
        int size = S.size();
        int count = 1;

        for (int i = 1; i < size; i++) {
            if (S[i] == S[i - 1]) {
                count++;
            } else {
                compressed_S += S[i - 1] + to_string(count);
                count = 1;
            }
        }

        if (size >= 1) {
            compressed_S += S[size - 1] + to_string(count);
        }

        return compressed_S.size() < size ? compressed_S : S;
    }
};