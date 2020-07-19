class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int answer = numBottles;
        int emptyBottles = numBottles;
        numBottles = 0;

        while (emptyBottles >= numExchange) {
            int addedBottles = emptyBottles / numExchange;
            answer += addedBottles;
            emptyBottles %= numExchange;
            emptyBottles += addedBottles;
        }

        return answer;
    }
};