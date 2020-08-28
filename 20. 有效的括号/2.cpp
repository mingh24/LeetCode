class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2) {
            return false;
        }

        unordered_map<char, char> bracket_map{{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> bracket_stack;

        for (char &ch : s) {
            if (bracket_map.find(ch) != bracket_map.end()) {
                if (bracket_stack.empty() || bracket_stack.top() != bracket_map[ch]) {
                    return false;
                } else {
                    bracket_stack.pop();
                }
            } else {
                bracket_stack.emplace(ch);
            }
        }

        return bracket_stack.empty();
    }
};