#include <stdio.h>

void printFrom1ToN(int input, int call)
{
    printf("%d", input);

    if (call == input)
    {
        return;
    }
    if (input > 1)
    {
        printf(" ");
    }
    
    printFrom1ToN(input - 1, call);
}

int main()
{

    int input, call;
    scanf("%d", &input);

    printFrom1ToN(input, 1);

    return 0;
}

/*
    input
    5

    output
    5
    4
    3
    2
    1
*/