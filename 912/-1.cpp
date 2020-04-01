class Solution {
public:
    vector<int> sleepSort(vector<int> &nums) {
        vector<int> result;
        result.reserve(nums.size());

        auto min_max = minmax_element(nums.begin(), nums.end());

        for (int num : nums) {
            thread([=, &result] {
                this_thread::sleep_for(chrono::milliseconds(num - *min_max.first));
                result.push_back(num);
            }).detach();
        }

        this_thread::sleep_for(chrono::milliseconds(*min_max.second - *min_max.first + 1));

        return result;
    }

    vector<int> sortArray(vector<int> &nums) {
        return sleepSort(nums);
    }
};