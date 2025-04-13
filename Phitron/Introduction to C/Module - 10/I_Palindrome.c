#include <stdio.h>
#include <string.h>

int main()
{

    char str[1002];
    scanf("%s", str);

    int len = strlen(str);

    int i = 0;
    int j = len - 1;

    int palindrom = 0;

    while (len--)
    {
        scanf("%s", str);
    }

    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrom = 1;
            break;
        }
        else if (str[i] == str[j])
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

/*/
    input
    abba

    output
    YES
--
    input
    abbc

    output
    NO
*/