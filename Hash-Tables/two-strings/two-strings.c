#include <stdio.h>
#include <string.h>

char* twoStrings(char* s1, char* s2) {
    int arr[128];
    unsigned int i;
    char *yes = "YES";
    char *no = "NO";

    for (i = 0; i < 128; ++i) {
        arr[i] = 0;
    }
    for (i = 0; i < strlen(s1); ++i) {
        arr[(int)s1[i]] = 1;
    }
    for (i = 0; i < strlen(s2); ++i) {
        if (arr[(int)s2[i]])
            return (yes);
    }
    return (no);
}

int main() {
    printf("%s\n", twoStrings("hello", "world"));
    printf("%s\n", twoStrings("hi", "world"));
    return (0);
}