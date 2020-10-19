class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string SS;
        string TT;

        for (const char &ch : S) {
            if (ch == '#') {
                if (!SS.empty()) {
                    SS.pop_back();
                }
            } else {
                SS += ch;
            }
        }

        for (const char &ch : T) {
            if (ch == '#') {
                if (!TT.empty()) {
                    TT.pop_back();
                }
            } else {
                TT += ch;
            }
        }

        return SS == TT;
    }
};