class Solution {
public:
    int maxArea(vector<int> &height) {
        int max_area = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {
            int min_height = min(height[left], height[right]);
            max_area = max(max_area, min_height * (right - left));

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return max_area;
    }
};