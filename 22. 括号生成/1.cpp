#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        helper(n, 0, 0, "", answer);

        return answer;
    }

private:
    void helper(int n, int left_bracket, int right_bracket, string bracket_combination, vector<string> &answer) {
        if (right_bracket == n) {
            answer.emplace_back(bracket_combination);
            return;
        }

        if (left_bracket < n) {
            helper(n, left_bracket + 1, right_bracket, bracket_combination + "(", answer);
        }

        if (right_bracket < left_bracket) {
            helper(n, left_bracket, right_bracket + 1, bracket_combination + ")", answer);
        }
    }
};

int main() {
    Solution solution;
    solution.generateParenthesis(4);
    return 0;
}