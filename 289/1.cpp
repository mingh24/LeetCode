class Solution {
public:
    void gameOfLife(vector<vector<int>> &board) {
        int x_offset[]{-1, 0, 1, -1, 1, -1, 0, 1};
        int y_offset[]{-1, -1, -1, 0, 0, 1, 1, 1};

        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                int count = 0;

                for (int k = 0; k < 8; ++k) {
                    int x = i + x_offset[k];
                    int y = j + y_offset[k];

                    if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size())
                        count += (board[x][y] & 1);
                }

                if (board[i][j] == 1) {
                    if (count == 2 || count == 3)
                        board[i][j] |= 0b10;
                } else {
                    if (count == 3)
                        board[i][j] |= 0b10;
                }
            }
        }

        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                board[i][j] >>= 1;
            }
        }
    }
};