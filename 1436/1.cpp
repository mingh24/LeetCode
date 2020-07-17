class Solution {
public:
    string destCity(vector<vector<string>> &paths) {
        unordered_map<string, string> paths_map;

        for (auto path : paths) {
            paths_map[path[0]] = path[1];
        }

        for (auto path : paths) {
            if (paths_map.find(path[1]) == paths_map.end()) {
                return path[1];
            }
        }

        return "";
    }
};