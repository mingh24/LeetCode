class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> answer;

        if (digits.empty()) {
            return answer;
        }

        backtrack(answer, "", digits);

        return answer;
    }

private:
    unordered_map<char, string> digit_map{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};

    void backtrack(vector<string> &answer, string combination, string digits) {
        if (digits.empty()) {
            answer.emplace_back(combination);
            return;
        }

        string letters = digit_map[digits[0]];

        for (int i = 0; i < letters.size(); i++) {
            combination += letters[i];
            backtrack(answer, combination, digits.substr(1));
            combination.pop_back();
        }
    }
};