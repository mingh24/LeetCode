class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 7));
        int day = stoi(date.substr(8, 10));

        int answer = day;

        month > 1 and (answer += 31);
        month > 2 and (answer += ((year % 4 == 0 and year % 100 != 0) ? 29 : 28));
        month > 3 and (answer += 31);
        month > 4 and (answer += 30);
        month > 5 and (answer += 31);
        month > 6 and (answer += 30);
        month > 7 and (answer += 31);
        month > 8 and (answer += 31);
        month > 9 and (answer += 30);
        month > 10 and (answer += 31);
        month > 11 and (answer += 30);

        return answer;
    }
};