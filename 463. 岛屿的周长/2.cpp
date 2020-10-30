class Solution {
public:
    int islandPerimeter(vector<vector<int>> &grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    return dfs(grid, i, j);
                }
            }
        }

        return 0;
    }

private:
    int dfs(vector<vector<int>> &grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[r].size()) {
            return 1;
        }

        if (grid[r][c] == 0) {
            return 1;
        }

        if (grid[r][c] == 2) {
            return 0;
        }

        grid[r][c] = 2;

        return dfs(grid, r - 1, c) + dfs(grid, r, c - 1) + dfs(grid, r + 1, c) + dfs(grid, r, c + 1);
    }
};