class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> answer;
        vector<int> last_occurrence(26, -1);

        for (int i = 0; i < S.size(); i++) {
            last_occurrence[S[i] - 'a'] = i;
        }

        int start = 0, end = 0;

        for (int i = 0; i < S.size(); i++) {
            end = max(end, last_occurrence[S[i] - 'a']);

            if (i == end) {
                answer.emplace_back(end - start + 1);
                start = end + 1;
            }
        }

        return answer;
    }
};