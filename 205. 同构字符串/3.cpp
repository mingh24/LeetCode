class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return helper(s) == helper(t);
    }

private:
    string helper(string str) {
        string result;
        vector<int> index_recorder(128);

        for (int i = 0; i < str.size(); i++) {
            if (index_recorder[str[i]] == 0) {
                index_recorder[str[i]] = i + 1;
            }

            result += to_string(index_recorder[str[i]]);
        }

        return result;
    }
};