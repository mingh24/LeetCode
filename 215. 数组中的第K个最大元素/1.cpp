class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        srand(time(0));
        vector<int> container(nums);

        return quickSelect(container, 0, container.size() - 1, k);
    }

private:
    int quickSelect(vector<int> &container, int left, int right, int k) {
        int pivot_index = partition(container, left, right);

        if (pivot_index == container.size() - k) {
            return container[pivot_index];
        } else if (pivot_index < container.size() - k) {
            return quickSelect(container, pivot_index + 1, right, k);
        } else {
            return quickSelect(container, left, pivot_index - 1, k);
        }
    }

    int partition(vector<int> &container, int left, int right) {
        int pivot_index = left + rand() % (right - left + 1);
        int pivot = container[pivot_index];

        while (left < right) {
            while (left < right and container[right] > pivot) {
                right--;
            }

            while (left < right and container[left] <= pivot) {
                left++;
            }

            if (left < right) {
                container[left] ^= container[right];
                container[right] ^= container[left];
                container[left] ^= container[right];

                if (pivot_index == left) {
                    pivot_index = right;
                } else if (pivot_index == right) {
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