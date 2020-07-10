static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
};

class Solution {
public:
    int minCount(vector<int> &coins) {
        int count = 0;

        for (int coin : coins) {
            count += ((coin + 1) >> 1);
        }

        return count;
    }
};