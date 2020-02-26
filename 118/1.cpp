#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> traingle;

        if (numRows == 0)
            return traingle;

        vector<int> lastFloor(1, 1);
        traingle.push_back(lastFloor);

        for (int i = 2; i < numRows + 1; ++i) {
            vector<int> currentFloor(i, 1);

            if (i > 2)
                for (int j = 1; j < currentFloor.size() - 1; ++j)
                    currentFloor[j] = lastFloor[j - 1] + lastFloor[j];

            traingle.push_back(currentFloor);
            lastFloor = currentFloor;
        }

        return traingle;
    }
};