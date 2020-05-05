class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> direction_count;

        for (char ch : moves)
            direction_count[ch]++;

        return (direction_count['L'] == direction_count['R'] and direction_count['U'] == direction_count['D']);
    }
};