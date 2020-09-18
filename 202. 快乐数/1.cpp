class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> num_set;

        while (num_set.find(n) == num_set.end()) {
            num_set.emplace(n);
            int temp = 0;

            while (n) {
                temp += pow(n % 10, 2);
                n /= 10;
            }

            n = temp;

            if (n == 1) {
                return true;
            }
        }

        return false;
    }
};