class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> nums1_set;
        unordered_set<int> nums2_set;
        vector<int> answer;

        for (int num : nums1)
            nums1_set.emplace(num);

        for (int num : nums2)
            nums2_set.emplace(num);

        for (auto iter1 = nums1_set.begin(); iter1 != nums1_set.end(); iter1++) {
            if (nums2_set.find(*iter1) != nums2_set.end())
                answer.emplace_back(*iter1);
        }

        return answer;
    }
};