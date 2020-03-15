class Solution {
public:
    int dfs(vector<vector<int>> &grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 1)
            return 0;

        int area = 1;
        grid[i][j] = 0;
        int i_offset[]{-1, 1, 0, 0};
        int j_offset[]{0, 0, -1, 1};
        for (int count = 0; count < 4; ++count)
            area += dfs(grid, i + i_offset[count], j + j_offset[count]);

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid) {
        int maxArea = 0;

        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j)
                maxArea = max(maxArea, dfs(grid, i, j));

        return maxArea;
    }
};