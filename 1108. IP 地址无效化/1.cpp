class Solution {
public:
    string defangIPaddr(string address) {
        string answer = "";

        for (char ch : address) {
            if (ch == '.') {
                answer += "[.]";
            } else {
                answer += ch;
            }
        }

        return answer;
    }
};