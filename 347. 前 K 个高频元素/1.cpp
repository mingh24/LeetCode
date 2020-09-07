class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        vector<int> answer;
        unordered_map<int, int> frequency_map;
        priority_queue<pair<int, int>> pq;

        for (int &num : nums) {
            frequency_map[num]++;
        }

        for (auto iter = frequency_map.begin(); iter != frequency_map.end(); iter++) {
            pq.emplace(iter->second, iter->first);
        }

        while (k--) {
            answer.emplace_back(pq.top().second);
            pq.pop();
        }

        return answer;
    }
};