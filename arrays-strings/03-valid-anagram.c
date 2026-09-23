#include <stdio.h>
#include <string.h>

/* LeetCode solution */
int isAnagram(char* s, char* t) {
    int count[256] = {0};

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

/* Local tests:
   Typical: "anagram", "nagaram" -> true
   Edge: "rat", "car" -> false
*/
int main(void) {
    printf("Test 1: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    printf("Test 2: %s\n",
           isAnagram("rat", "car") ? "true" : "false");

    return 0;
}
