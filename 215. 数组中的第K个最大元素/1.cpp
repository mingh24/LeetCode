class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        vector<int> container(nums);
        quickSort(container, 0, container.size() - 1);

        return container[container.size() - k];
    }

private:
    void quickSort(vector<int> &container, int start_index, int end_index) {
        if (start_index >= end_index) {
            return;
        }

        int pivot_index = partition(container, start_index, end_index);
        quickSort(container, start_index, pivot_index - 1);
        quickSort(container, pivot_index + 1, end_index);
    }

    int partition(vector<int> &container, int start_index, int end_index) {
        int pivot_index = start_index + rand() % (end_index - start_index + 1);
        int pivot = container[pivot_index];
        int left = start_index;
        int right = end_index;

        while (left != right) {
            while (left < right and container[right] > pivot) {
                right--;
            }

            while (left < right and container[left] <= pivot) {
                left++;
            }

            if (left < right) {
                container[left] = container[left] ^ container[right];
                container[right] = container[left] ^ container[right];
                container[left] = container[left] ^ container[right];

                if (left == pivot_index) {
                    pivot_index = right;
                } else if (right == pivot_index) {
                    pivot_index = left;
                }
            }
        }

        container[pivot_index] = container[left];
        pivot_index = left;
        container[left] = pivot;

        return pivot_index;
    }
};