class Solution {
public:
    int trap(vector<int> &height) {
        int answer = 0;
        int left = 0, right = height.size() - 1;
        int left_max = 0, right_max = 0;

        while (left < right) {
            left_max = max(left_max, height[left]);
            right_max = max(right_max, height[right]);

            if (left_max < right_max)
                answer += left_max - height[left++];
            else
                answer += right_max - height[right--];
        }

        return answer;
    }
};