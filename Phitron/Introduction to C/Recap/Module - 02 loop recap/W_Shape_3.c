#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1, k = 1; i <= n; i++, k += 2)
    {
        int space = n + 5;

        while (space--)
        {
            printf(" ");
        }
        

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}


/*
    N = 4;
                k  i    space
       *        1  1      3
      ***       3  2      2
     *****      5  3      1
    *******     7  4      0
    *******     7  4      0
     *****      5  3      1
      ***       3  2      2
       *        1  1      3

*/