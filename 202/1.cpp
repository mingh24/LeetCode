class Solution {
public:
    bool isHappy(int n) {
        if (recorder.find(n) != recorder.end())
            return false;

        if (n == 1)
            return true;

        recorder.emplace(n);

        int sum = 0;
        while (n) {
            sum += pow(n % 10, 2);
            n /= 10;
        }

        return isHappy(sum);
    }

private:
    unordered_set<int> recorder;
};