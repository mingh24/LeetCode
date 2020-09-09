class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int answer = -1;
        unordered_map<int, int> num_count;
        int size = nums.size();

        for (int &num : nums) {
            num_count[num]++;

            if (num_count[num] > size / 2) {
                answer = num;
                break;
            }
        }

        return answer;
    }
};