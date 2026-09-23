#include <stdio.h>

/* LeetCode solution */
void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int* nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
}

/* Local tests:
   Typical: [0,1,0,3,12] -> [1,3,12,0,0]
   Edge: [0] -> [0]
*/
int main(void) {
    int test1[] = {0, 1, 0, 3, 12};
    moveZeroes(test1, 5);
    printf("Test 1: ");
    printArray(test1, 5);

    int test2[] = {0};
    moveZeroes(test2, 1);
    printf("Test 2: ");
    printArray(test2, 1);

    return 0;
}
