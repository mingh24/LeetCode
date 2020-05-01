class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        unordered_set<char> jewel_types;

        for (char ch : J)
            jewel_types.emplace(ch);

        for (char ch : S) {
            if (jewel_types.find(ch) != jewel_types.end())
                count++;
        }

        return count;
    }
};