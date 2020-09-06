class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int answer = 0;
        bitset<42> b;

        for (char &jewel : J) {
            if (jewel >= 'a' && jewel <= 'z') {
                b[jewel - 'a'] = 1;
            } else if (jewel >= 'A' && jewel <= 'Z') {
                b[jewel - 'A' + 26] = 1;
            }
        }

        for (char &stone : S) {
            if (stone >= 'a' && stone <= 'z') {
                if (b[stone - 'a'] == 1) {
                    answer++;
                }
            } else if (stone >= 'A' && stone <= 'Z') {
                if (b[stone - 'A' + 26] == 1) {
                    answer++;
                }
            }
        }

        return answer;
    }
};