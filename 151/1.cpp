class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();

        if (size == 0)
            return s;

        for (int i = 0; i < size / 2; i++) {
            char temp = s[i];
            s[i] = s[size - 1 - i];
            s[size - 1 - i] = temp;
        }

        bool is_prev_space = true;
        for (int i = 0; i < size; i++) {
            if (s[i] == ' ') {
                if (is_prev_space) {
                    s.erase(i, 1);
                    size--;
                    i--;
                } else {
                    is_prev_space = true;
                }
            } else {
                is_prev_space = false;
            }
        }

        if (size == 0)
            return s;

        if (s[size - 1] == ' ') {
            s.erase(size - 1, 1);
            size--;
        }

        for (int i = 0; i < size; i++) {
            int begin = i;
            int end = i;

            while (end < size and s[end] != ' ')
                end++;

            for (int j = begin; j < (begin + end) / 2; j++) {
                char temp = s[j];
                s[j] = s[begin + end - 1 - j];
                s[begin + end - 1 - j] = temp;
            }

            i = end;
        }

        return s;
    }
};