#include <stdio.h>

int main(){

    char s[100002];

    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }

    printf("%s", s);
    
    return 0;
}

/*
    input
    happy,NewYear,enjoy

    output
    HAPPY nEWyEAR ENJOY


*/