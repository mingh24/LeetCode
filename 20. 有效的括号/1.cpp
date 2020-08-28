class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) {
            return true;
        }

        stack<char> bracket_stack;

        for (char &ch : s) {
            if (bracket_stack.empty()) {
                bracket_stack.emplace(ch);
            } else {
                if (ch == ')') {
                    if (bracket_stack.top() != '(') {
                        return false;
                    }
                } else if (bracket_stack.top() != '{') {
                    return false;
                } else if (bracket_stack.top() != '[') {
                    return false;
                }

                bracket_stack.emplace(ch);
            }
        }
    }
};