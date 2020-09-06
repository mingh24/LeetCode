class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int answer = 0;
        unordered_set<char> jewel_set;

        for (char &jewel : J) {
            jewel_set.emplace(jewel);
        }

        for (char &stone : S) {
            if (jewel_set.find(stone) != jewel_set.end()) {
                answer++;
            }
        }

        return answer;
    }
};