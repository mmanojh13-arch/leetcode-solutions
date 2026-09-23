#include <stdio.h>
#include <string.h>

/* LeetCode solution */
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

/* Local tests:
   Typical: ["flower","flow","flight"] -> "fl"
   Edge: ["dog","racecar","car"] -> ""
*/
int main(void) {
    char a[] = "flower";
    char b[] = "flow";
    char c[] = "flight";
    char* test1[] = {a, b, c};
    printf("Test 1: %s\n", longestCommonPrefix(test1, 3));

    char d[] = "dog";
    char e[] = "racecar";
    char f[] = "car";
    char* test2[] = {d, e, f};
    printf("Test 2: %s\n", longestCommonPrefix(test2, 3));

    return 0;
}
