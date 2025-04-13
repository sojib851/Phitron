#include <stdio.h>
#include <string.h>

int main()
{

    char a[12], b[12];

    scanf("%s %s", a, b);

    printf("%d %d\n", strlen(a), strlen(b));

    char concat[24];
    strcpy(concat, a);
    strcat(concat, b);

    printf("%s\n", concat);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

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