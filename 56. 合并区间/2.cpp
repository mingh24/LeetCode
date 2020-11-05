class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        vector<vector<int>> answer;
        int size = intervals.size();
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < size; i++) {
            int begin = intervals[i][0];
            int end = intervals[i][1];

            if (answer.empty() || answer.back()[1] < begin) {
                answer.push_back({begin, end});
            } else {
                answer.back()[1] = max(answer.back()[1], end);
            }
        }

        return answer;
    }
};