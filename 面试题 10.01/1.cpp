class Solution {
public:
    void merge(vector<int> &A, int m, vector<int> &B, int n) {
        vector<int> container;
        int i = 0, j = 0;
        int current;

        while (i < m || j < n) {
            if (i == m)
                current = B[j++];
            else if (j == n)
                current = A[i++];
            else if (A[i] < B[j])
                current = A[i++];
            else
                current = B[j++];
            container.push_back(current);
        }

        for (i = 0; i < m + n; ++i)
            A[i] = container[i];
    }
};