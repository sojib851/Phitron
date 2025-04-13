#include <stdio.h>
#include <string.h>

int call(char str1, char str2, char str3)
{
    if (str1 == str2 && str2 == str3)
    {
        return 0;
    }
    else if (str1 == str2 || str1 == str3 || str2 == str3)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{

    char str1[105], str2[105], str3[105];
    scanf("%s %s %s", str1, str2, str3);

    int length = strlen(str1);
    int operations = 0;

    for (int i = 0; i < length; i++)
    {
        operations += call(str1[i], str2[i], str3[i]);
    }

    printf("%d\n", operations);

    return 0;
}