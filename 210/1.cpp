class Solution {
private:
    vector<vector<int>> edges;
    vector<int> indegree;
    vector<int> answer;

public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites) {
        edges.resize(numCourses);
        indegree.resize(numCourses);

        for (vector<int> prerequisite : prerequisites) {
            edges[prerequisite[1]].emplace_back(prerequisite[0]);
            indegree[prerequisite[0]]++;
        }

        queue<int> q;

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0)
                q.emplace(i);
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            answer.emplace_back(node);

            for (int adjacent : edges[node]) {
                indegree[adjacent]--;

                if (indegree[adjacent] == 0)
                    q.emplace(adjacent);
            }
        }

        if (answer.size() != numCourses)
            return {};

        return answer;
    }
};