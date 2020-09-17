class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        int size1 = s1.size();
        int size2 = s2.size();

        if (size1 != size2) {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1 == s2;
    }
};