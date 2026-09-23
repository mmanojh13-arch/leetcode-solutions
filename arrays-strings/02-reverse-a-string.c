#include <stdio.h>
#include <string.h>

/* LeetCode solution */
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

/* Local tests:
   Typical: "hello" -> "olleh"
   Edge: "a" -> "a"
*/
int main(void) {
    char test1[] = "hello";
    reverseString(test1, (int)strlen(test1));
    printf("Test 1: %s\n", test1);

    char test2[] = "a";
    reverseString(test2, (int)strlen(test2));
    printf("Test 2: %s\n", test2);

    return 0;
}
