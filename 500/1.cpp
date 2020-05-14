class Solution {
public:
    vector<string> findWords(vector<string> &words) {
        unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        vector<string> answer;

        for (string word : words) {
            bool flag1 = true;
            for (char ch : word) {
                if (row1.find(tolower(ch)) == row1.end()) {
                    flag1 = false;
                    break;
                }
            }

            bool flag2 = true;
            for (char ch : word) {
                if (row2.find(tolower(ch)) == row2.end()) {
                    flag2 = false;
                    break;
                }
            }

            bool flag3 = true;
            for (char ch : word) {
                if (row3.find(tolower(ch)) == row3.end()) {
                    flag3 = false;
                    break;
                }
            }

            if (flag1 || flag2 || flag3)
                answer.emplace_back(word);
        }

        return answer;
    }
};