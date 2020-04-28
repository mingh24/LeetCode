/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int top = findMountainTop(mountainArr, 0, mountainArr.length() - 1);

        int index = findFromTopLeft(target, mountainArr, 0, top);

        if (index != -1)
            return index;

        return findFromTopRight(target, mountainArr, top + 1, mountainArr.length() - 1);
    }

    int findMountainTop(MountainArray &mountainArr, int left, int right) {
        while (left < right) {
            int middle = left + (right - left) / 2;

            if (mountainArr.get(middle) < mountainArr.get(middle + 1))
                left = middle + 1;
            else
                right = middle;
        }

        return left;
    }

    int findFromTopLeft(int target, MountainArray &mountainArr, int left, int right) {
        while (left < right) {
            int middle = left + (right - left) / 2;

            if (mountainArr.get(middle) < target)
                left = middle + 1;
            else
                right = middle;
        }

        return mountainArr.get(left) == target ? left : -1;
    }

    int findFromTopRight(int target, MountainArray &mountainArr, int left, int right) {
        while (left < right) {
            int middle = left + (right - left) / 2;

            if (mountainArr.get(middle) > target)
                left = middle + 1;
            else
                right = middle;
        }

        return mountainArr.get(left) == target ? left : -1;
    }
};