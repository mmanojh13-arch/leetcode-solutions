#include <stdio.h>

/* LeetCode solution */
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

/* Local tests:
   Typical: [-1,0,3,5,9,12], target=9 -> 4
   Edge: [-1,0,3,5,9,12], target=2 -> -1
*/
int main(void) {
    int nums[] = {-1, 0, 3, 5, 9, 12};

    printf("Test 1: %d\n", search(nums, 6, 9));
    printf("Test 2: %d\n", search(nums, 6, 2));

    return 0;
}
