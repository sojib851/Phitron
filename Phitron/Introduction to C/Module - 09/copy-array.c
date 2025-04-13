#include <stdio.h>

int main()
{

    int a[100000], b[100000];

    int length1 = 0, length2 = 0;

    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before copy\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");
    a[2] = 100;

    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }


    printf("After copy\n");

    length2 = length1;

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < length2; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

        /*
            input
            5
            1 5 3 5 8
        
            output
            
            Before copy
            1 5 3 5 8 
            0 0 0 0 0 
            After copy
            1 5 100 5 8 
            1 5 100 5 8 
        */