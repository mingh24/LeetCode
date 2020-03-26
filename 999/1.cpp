class Solution {
public:
    int numRookCaptures(vector <vector<char>> &board) {
        int capture = 0;
        int row = -1, column = -1;

        for (row = 0; row < 8; ++row) {
            auto iter = find(board[row].begin(), board[row].end(), 'R');
            if (iter != board[row].end()) {
                column = distance(board[row].begin(), iter);
                break;
            }
        }

        for (int i = row - 1; i >= 0; --i) {
            if (board[i][column] == 'B') {
                break;
            } else if (board[i][column] == 'p') {
                ++capture;
                break;
            }
        }

        for (int i = row + 1; i < 8; ++i) {
            if (board[i][column] == 'B') {
                break;
            } else if (board[i][column] == 'p') {
                ++capture;
                break;
            }
        }

        for (int j = column - 1; j >= 0; --j) {
            if (board[row][j] == 'B') {
                break;
            } else if (board[row][j] == 'p') {
                ++capture;
                break;
            }
        }

        for (int j = column + 1; j < 8; ++j) {
            if (board[row][j] == 'B') {
                break;
            } else if (board[row][j] == 'p') {
                ++capture;
                break;
            }
        }

        return capture;
    }
};