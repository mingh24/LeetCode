class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(1, 1);

        for (int i = 1; i < rowIndex + 1; ++i) {
            row.insert(row.begin(), 0);
            for (int j = 0; j < i; ++j)
                row[j] += row[j + 1];
        }

        return row;
    }
};