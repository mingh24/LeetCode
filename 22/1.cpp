class Solution {
public:
    vector<string> generateParenthesis(int n) {
        dfs(n, n, "");

        return answer;
    }

    void dfs(int left_parenthesis, int right_parenthesis, string current_str) {
        if (left_parenthesis == 0 and right_parenthesis == 0) {
            answer.emplace_back(current_str);
            return;
        }

        if (left_parenthesis > right_parenthesis)
            return;

        if (left_parenthesis > 0)
            dfs(left_parenthesis - 1, right_parenthesis, current_str + "(");

        if (right_parenthesis > 0)
            dfs(left_parenthesis, right_parenthesis - 1, current_str + ")");
    }

private:
    vector<string> answer;
};