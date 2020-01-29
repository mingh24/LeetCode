class Solution {
public:
    string calculate(string origin) {
        string description;
        int count = 0;
        char previous = origin[0];
        char current;
        for (int i = 0; i < origin.size(); ++i) {
            current = origin[i];
            if (current == previous) {
                ++count;
            } else {
                description.push_back(count + '0');
                description.push_back(previous);
                previous = origin[i];
                count = 1;
            }
        }

        description.push_back(count + '0');
        description.push_back(current);

        return description;
    }

    string countAndSay(int n) {
        string origin = "1";
        string description = origin;
        for (int i = 0; i < n - 1; ++i)
            description = calculate(description);

        return description;
    }
};