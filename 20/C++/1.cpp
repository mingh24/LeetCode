class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];

            if ((c == ')' || c == '}' || c == ']') && myStack.empty())
                return false;

            if (c == '(' || c == '{' || c == '[')
                myStack.push(c);
            else if (c == ')')
                if ('(' != myStack.top())
                    return false;
                else
                    myStack.pop();
            else if (c == '}')
                if ('{' != myStack.top())
                    return false;
                else
                    myStack.pop();
            else if (c == ']')
                if ('[' != myStack.top())
                    return false;
                else
                    myStack.pop();
        }

        if (!myStack.empty())
            return false;

        return true;
    }
};