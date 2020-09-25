class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        unordered_map<char, int> num_map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I') {
                if (i + 1 < s.size() && s[i + 1] == 'V') {
                    answer += num_map['V'] - num_map['I'];
                    i++;
                } else if (i + 1 < s.size() && s[i + 1] == 'X') {
                    answer += num_map['X'] - num_map['I'];
                    i++;
                } else {
                    answer += num_map['I'];
                }
            } else if (s[i] == 'X') {
                if (i + 1 < s.size() && s[i + 1] == 'L') {
                    answer += num_map['L'] - num_map['X'];
                    i++;
                } else if (i + 1 < s.size() && s[i + 1] == 'C') {
                    answer += num_map['C'] - num_map['X'];
                    i++;
                } else {
                    answer += num_map['X'];
                }
            } else if (s[i] == 'C') {
                if (i + 1 < s.size() && s[i + 1] == 'D') {
                    answer += num_map['D'] - num_map['C'];
                    i++;
                } else if (i + 1 < s.size() && s[i + 1] == 'M') {
                    answer += num_map['M'] - num_map['C'];
                    i++;
                } else {
                    answer += num_map['C'];
                }
            } else {
                answer += num_map[s[i]];
            }
        }

        return answer;
    }
};