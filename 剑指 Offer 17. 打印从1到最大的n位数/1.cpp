class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> answer;
        int max_num_upeer = 10;

        while (--n) {
            max_num_upeer *= 10;
        }

        for (int i = 1; i < max_num_upeer; i++) {
            answer.emplace_back(i);
        }

        return answer;
    }
};