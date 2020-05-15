class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> sum_count_map;
        sum_count_map[0] = 1;

        for (int num : nums) {
            sum += num;

            if (sum_count_map.find(sum - k) != sum_count_map.end())
                count += sum_count_map[sum - k];

            sum_count_map[sum]++;
        }

        return count;
    }
};