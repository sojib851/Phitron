#include <stdio.h>
#include <string.h>
int main()
{

    char str[100] = "a b c d e f g h i j k l m n n n n oooo ppp qqq rrr";

    int f[26] = {0};

    int len = strlen(str);

    // printf("%s", str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];

        int index = ch - 'a';

        f[index] = 1;
    }
    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        count += f[i];

        if (f[i] == 1)
        {
            printf("%c %d\n", i + 'a', f[i]);
        }
        
        
    }
    printf("%d", count);

    return 0;
}

/*
    output
    a 1
    b 1
    c 1
    d 1
    e 1
    f 1
    g 1
    h 1
    i 1
    j 1
    k 1
    l 1
    m 1
    n 1
    o 1
    p 1
    q 1
    r 1
    18
*/