#include <stdio.h>
#include <string.h>

int isSubsequence(char *s, char *t) {
    int i = 0, j = 0;
    int m = strlen(s), n = strlen(t);

    while (i < m && j < n) {
        if (s[i] == t[j]) {
            j++;
        }
        i++;
    }

    return (j == n);
}

int main() {
    char s[10005];
    scanf("%s", s);

    if (isSubsequence(s, "hello")) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}