class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> answer;

        if (nums1.empty() || nums2.empty()) {
            return vector<int>(answer.begin(), answer.end());
        }

        unordered_set<int> nums1_set(nums1.begin(), nums1.end());

        for (const int &num : nums2) {
            if (nums1_set.find(num) != nums1_set.end()) {
                answer.emplace(num);
            }
        }

        return vector<int>(answer.begin(), answer.end());
    }
};