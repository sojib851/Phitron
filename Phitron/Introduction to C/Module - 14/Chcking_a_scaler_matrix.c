#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int mtr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mtr[i][j]);
        }
    }

    /*
        1. Diagonal;
        2. Diagonal elements are same;
        3. All other values are 0;
    */

    int element = mtr[0][0];
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (mtr[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (mtr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("Scaler");
    }
    else
    {
        printf("Not Scaler");
    }

    return 0;
}


/*
        input
        3
        1 0 0
        0 1 0
        0 0 1

        output
        Scaler
*/