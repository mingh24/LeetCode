class Solution {
public:
    int getDigitalSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int movingCount(int m, int n, int k) {
        if (k == 0)
            return 1;

        int count = 1;

        vector<vector<int>> visit(m, vector<int>(n, 0));
        visit[0][0] = 1;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((i == 0 && j == 0) || getDigitalSum(i) + getDigitalSum(j) > k)
                    continue;

                if (i - 1 >= 0)
                    visit[i][j] |= visit[i - 1][j];

                if (j - 1 >= 0)
                    visit[i][j] |= visit[i][j - 1];

                count += visit[i][j];
            }
        }

        return count;
    }
};