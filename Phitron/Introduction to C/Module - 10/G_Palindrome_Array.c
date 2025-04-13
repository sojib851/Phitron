#include <stdio.h>

int main()
{

    int cs;
    scanf("%d", &cs);

    int cslength[cs];

    int i = 0;
    int j = cs - 1;

    int palindrom = 0;

    while (cs--)
    {
        scanf("%d", &cslength[cs]);
    }

    while (i < j)
    {
        if (cslength[i] != cslength[j])
        {
            palindrom = 1;
            break;
        }
        else if (cslength[i] == cslength[j])
        {
            i++;
            j--;
        }
    }

    if (palindrom == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

/*
    input
    5
    1 3 2 3 1

    output
    YES

    --->
    
    input
    5
    1 2 3 4 5

    output
    NO

*/