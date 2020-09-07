class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer{1};

        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--) {
                answer[j] += answer[j - 1];
            }

            answer.emplace_back(1);
        }

        return answer;
    }
};