/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee *> employees, int id) {
        for (Employee *employee : employees)
            employees_map[employee->id] = employee;

        return dfs(id);
    }

    int dfs(int id) {
        Employee *employee = employees_map[id];
        int importance = employee->importance;

        for (int subordinate_id : employee->subordinates)
            importance += dfs(subordinate_id);

        return importance;
    }

private:
    unordered_map<int, Employee *> employees_map;
};