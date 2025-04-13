#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000], s3[1000];

    scanf("%s %s %s", s1, s2, s3);

    char *min = s1;
    char *max = s1;

    if (strcmp(s2, min) < 0)
    {
        min = s2;
    }
    if (strcmp(s2, max) > 0)
    {
        max = s2;
    }
    if (strcmp(s3, min) < 0)
    {
        min = s3;
    }
    if (strcmp(s3, max) > 0)
    {
        max = s3;
    }
    printf("%s\n%s", min, max);

    return 0;
}

/*
    input
    abc def ghi

    output
    abc
    ghi
*/