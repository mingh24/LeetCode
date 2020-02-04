class Solution {
public:
    string addBinary(string a, string b) {
        string result;

        int carry = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; --i, --j) {
            int sum = carry;
            if (i >= 0)
                sum += a.at(i) - '0';
            if (j >= 0)
                sum += b.at(j) - '0';
            result += sum % 2 + '0';
            carry = sum / 2;
        }

        if (carry == 1)
            result += '1';

        int size = result.size();
        for (int i = 0; i < size / 2; ++i) {
            char temp = result.at(size - i - 1);
            result.at(size - i - 1) = result.at(i);
            result.at(i) = temp;
        }

        return result;
    }
};