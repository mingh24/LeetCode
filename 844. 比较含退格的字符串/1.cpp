class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> S_stack;
        stack<char> T_stack;

        for (const char &ch : S) {
            if (ch == '#') {
                if (!S_stack.empty()) {
                    S_stack.pop();
                }
            } else {
                S_stack.emplace(ch);
            }
        }

        for (const char &ch : T) {
            if (ch == '#') {
                if (!T_stack.empty()) {
                    T_stack.pop();
                }
            } else {
                T_stack.emplace(ch);
            }
        }

        return S_stack == T_stack;
    }
};