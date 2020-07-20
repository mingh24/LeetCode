class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        unordered_map<int, int> occurrence_count_map;

        for (int num : arr) {
            occurrence_count_map[num]++;
        }

        unordered_set<int> occurrence_count_set;

        for (auto iter = occurrence_count_map.begin(); iter != occurrence_count_map.end(); iter++) {
            occurrence_count_set.emplace(iter->second);
        }

        return occurrence_count_map.size() == occurrence_count_set.size();
    }
};