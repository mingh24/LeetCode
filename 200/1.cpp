class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        if (grid.empty())
            return 0;

        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }

    void dfs(vector<vector<char>> &grid, int row, int column) {
        grid[row][column] = '0';

        if (row - 1 >= 0 and grid[row - 1][column] == '1')
            dfs(grid, row - 1, column);

        if (row + 1 < grid.size() and grid[row + 1][column] == '1')
            dfs(grid, row + 1, column);

        if (column - 1 >= 0 and grid[row][column - 1] == '1')
            dfs(grid, row, column - 1);

        if (column + 1 < grid[0].size() and grid[row][column + 1] == '1')
            dfs(grid, row, column + 1);
    }
};