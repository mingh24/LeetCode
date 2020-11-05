class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        vector<vector<int>> answer;
        int size = intervals.size();
        sort(intervals.begin(), intervals.end());

        int i = 0;

        while (i < size) {
            int begin = intervals[i][0];
            int end = intervals[i][1];

            while (i < size - 1 && intervals[i + 1][0] <= end) {
                end = max(end, intervals[i + 1][1]);
                i++;
            }

            answer.push_back({begin, end});
            i++;
        }

        return answer;
    }
};