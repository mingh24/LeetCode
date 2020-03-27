class Solution {
public:
    bool hasGroupsSizeX(vector<int> &deck) {
        if (deck.size() < 2)
            return false;

        unordered_map<int, int> num_count;
        for (auto num : deck)
            ++num_count[num];

        vector<int> values;
        for (auto iter = num_count.begin(); iter != num_count.end(); ++iter) {
            if (iter->second < 2)
                return false;
            values.emplace_back(iter->second);
        }

        for (int i = 0; i < values.size() - 1; ++i)
            for (int j = i + 1; j < values.size(); ++j)
                if (gcd(values[i], values[j]) < 2)
                    return false;

        return true;
    }
};