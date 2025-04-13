#include <stdio.h>
#include <string.h>

int main(){

    char a[12];
    char b[12];
    char tem_a[12];
    char tem_b[12];

    // string input -->
    scanf("%s %s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);


    // string copy -->
    strcpy(tem_a, a);
    strcpy(tem_b, b);

    // concatenating A and B (A + B) -->
    strcat(tem_a, tem_b);
    printf("%s\n", tem_a);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);
    return 0;
}

/*
    input
    abcd
    ef

    output
    4 2
    abcdef
    ebcd af
*/