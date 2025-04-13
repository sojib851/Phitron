#include <stdio.h>

int main()
{

    /*
        avabe korle o hoy kintu jodi correct value tai na thake tahole
        infinite loop hoye jabe tai option : 2 vabe korte hobe.
    */
    // Option : 1 -->

    // while (1)
    // {
    //     int x;
    //     scanf("%d", &x);

    //     if (x == 1999)
    //     {
    //         printf("Correct\n");
    //         break;
    //     }
    //     else{
    //         printf("Wrong\n");
    //     }
    // }

    /*
    Option : 2 -->
    */

    int x;

    while (scanf("%d", &x) != EOF)
    {

        if (x == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

/*
        input       output
        2200        Wrong
        1020        Wrong
        1999        Correct
        1000
        9999
        4595
        4444
*/ 