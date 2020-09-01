class Solution {
public:
    int distributeCandies(vector<int> &candies) {
        unordered_set<int> candies_set;

        for (int &candy : candies) {
            candies_set.emplace(candy);
        }

        return min(candies_set.size(), candies.size() / 2);
    }
};