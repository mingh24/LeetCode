class Solution {
public:
    int distributeCandies(vector<int> &candies) {
        int answer = 1;
        int size = candies.size();

        sort(candies.begin(), candies.end());

        for (int i = 1; i < size && answer < size / 2; i++) {
            if (candies[i - 1] != candies[i]) {
                answer++;
            }
        }

        return answer;
    }
};