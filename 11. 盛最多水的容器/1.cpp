class Solution {
public:
    int maxArea(vector<int> &height) {
        int answer = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {
            answer = max(answer, min(height[left], height[right]) * (right - left));

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return answer;
    }
};