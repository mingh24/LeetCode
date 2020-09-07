class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer(rowIndex + 1, 1);
        int v1 = answer[0];
        int v2 = 0;

        for (int i = 2; i <= rowIndex; i++) {
            for (int j = 1; j < i; j++) {
                v2 = answer[j];
                answer[j] = v1 + v2;
                v1 = v2;
            }
        }

        return answer;
    }
};