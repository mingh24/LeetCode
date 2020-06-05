class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for (int n = left; n <= right; n++) {
            if (selfDividing(n))
                answer.emplace_back(n);
        }
        return answer;
    }

    bool selfDividing(int n) {
        int x = n;
        while (x > 0) {
            int d = x % 10;
            x /= 10;
            if (d == 0 || (n % d) > 0)
                return false;
        }
        return true;
    }
};