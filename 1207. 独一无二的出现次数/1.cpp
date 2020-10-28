class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        unordered_map<int, int> num_occurrence_count;
        unordered_set<int> occurrence_count;

        for (const int &num : arr) {
            num_occurrence_count[num]++;
        }

        for (auto iter = num_occurrence_count.begin(); iter != num_occurrence_count.end(); iter++) {
            if (occurrence_count.find(iter->second) != occurrence_count.end()) {
                return false;
            } else {
                occurrence_count.emplace(iter->second);
            }
        }

        return true;
    }
};