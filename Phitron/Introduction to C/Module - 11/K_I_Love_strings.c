#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[52];
        char t[52];
        scanf("%s %s", s, t);

        int len = strlen(s);
        int len2 = strlen(t);
        int length;

        if (len < len2)
        {
            length = len;
        }
        else
        {
            length = len2;
        }

        for (int j = 0; j < length; j++)
        {
            printf("%c%c", s[j], t[j]);
        }

        if (len > len2)
        {
            printf("%s", s + length);
        }
        else if (len2 > len)
        {
            printf("%s", t + length);
        }
        printf("\n");
    }

    return 0;
}

/*
    input
    2
    ipAsu ccsit
    ey gpt


    output
    icpcAssiut
    egypt

*/