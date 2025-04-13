#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[102];
        scanf("%s", s);
        int n = strlen(s);
        if (n <= 10)
        {
            printf("%s\n", s);
        }
        else{
            printf("%c%d%c\n", s[0], n - 2, s[n - 1]);
        }
    }
    

    return 0;
}
/*
    input
    4
    word
    localization
    internationalization
    pneumonoultramicroscopicsilicovolcanoconiosis

    output
    word
    l10n
    i18n
    p43s

*/