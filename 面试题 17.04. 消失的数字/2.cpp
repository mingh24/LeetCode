class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int answer = 0;

        for (int i = 0; i < nums.size(); i++) {
            answer ^= i;
            answer ^= nums[i];
        }

        answer ^= nums.size();

        return answer;
    }
};