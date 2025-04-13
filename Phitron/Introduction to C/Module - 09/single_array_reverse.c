#include <stdio.h>

    int a[100000];

int main(){

    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    // reverse option : 1 --- >

    // for (int i = length - 1; i >= 0; i--)
    // {
    //     printf("%d ", a[i]);
    // }
    
    // reverse option : 2 --- >

    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        int temp = a[i];

        a[i] = a[j];

        a[j] = temp;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    // ------- <
    return 0;
}

/*
    input
    5
    1 2 3 4 5

    output
    5 4 3 2 1 

*/