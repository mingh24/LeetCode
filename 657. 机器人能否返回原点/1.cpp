class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal = 0, vertical = 0;

        for (auto &move : moves) {
            switch (move) {
            case 'R':
                horizontal++;
                break;
            case 'L':
                horizontal--;
                break;
            case 'U':
                vertical--;
                break;
            case 'D':
                vertical++;
                break;
            default:
                break;
            }
        }

        return horizontal == 0 && vertical == 0;
    }
};