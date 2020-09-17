class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        int size1 = s1.size();
        int size2 = s2.size();

        if (size1 != size2) {
            return false;
        }

        int char_count[128]{0};

        for (int i = 0; i < size1; i++) {
            char_count[s1[i]]++;
            char_count[s2[i]]--;
        }

        for (int count : char_count) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};