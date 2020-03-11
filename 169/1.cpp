class Solution {
public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> data;

        for (int num : nums)
            if (data.find(num) != data.end())
                ++data.at(num);
            else
                data.at(num) = 1;

        int majority_element = nums.at(0);
        for (unordered_map<int, int>::iterator it = data.begin(); it != data.end(); ++it)
            if (data.at(majority_element) < it->second)
                majority_element = it->first;

        return majority_element;
    }
};