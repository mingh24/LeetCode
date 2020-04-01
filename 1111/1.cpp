class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> answer(seq.size());

        int index = 0;
        for (auto ch : seq) {
            answer[index++] = (ch == '(' ? index & 1 : (index + 1) & 1);
        }

        return answer;
    }
};