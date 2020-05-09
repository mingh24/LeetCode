class Solution {
public:
    int distributeCandies(vector<int> &candies) {
        set<int> candies_set(candies.begin(), candies.end());

        return min(candies.size() / 2, candies_set.size());
    }
};