class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        int c1 = cost[0];
        int c2 = cost[1];
        int size = cost.size();

        for (int i = 2; i < size; i++) {
            c1 = c2;
            c2 = min(c1, c2) + cost[i];
        }

        return min(c1, c2);
    }
};