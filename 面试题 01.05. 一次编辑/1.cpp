class Solution {
public:
    bool oneEditAway(string first, string second) {
        int first_size = first.size();
        int second_size = second.size();

        int difference = first_size - second_size;

        if (difference < -1 || difference > 1) {
            return false;
        }

        int flag = true;
        int i = 0;
        int j = 0;

        while (i < first_size && j < second_size) {
            if (first[i] != second[j]) {
                if (difference == -1) {
                    i--;
                } else if (difference == 1) {
                    j--;
                }

                if (!flag) {
                    return false;
                }

                flag = false;
            }

            i++;
            j++;
        }

        return true;
    }
};