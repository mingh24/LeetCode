class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.emplace_back(0);
        int size = flowerbed.size();
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (n <= 0) {
                return true;
            }

            if (flowerbed[i] == 0) {
                count++;
            } else {
                count = 0;
            }

            if (count == 3) {
                count = 1;
                n--;
            }
        }

        return n <= 0;
    }
};