class Solution {
public:
    int romanToInt(string s) {
        int positive = 0, negative = 0;
        int length = s.length();

        map<char, int> myMap;
        myMap['I'] = 1;
        myMap['V'] = 5;
        myMap['X'] = 10;
        myMap['L'] = 50;
        myMap['C'] = 100;
        myMap['D'] = 500;
        myMap['M'] = 1000;

        for (int i = 0; i < length - 1; ++i){
            if (myMap[s[i]] >= myMap[s[i + 1]])
                positive += myMap[s[i]];
            else
                negative -= myMap[s[i]];
        }

        positive += myMap[s[length - 1]];

        return positive + negative;
    }
};
