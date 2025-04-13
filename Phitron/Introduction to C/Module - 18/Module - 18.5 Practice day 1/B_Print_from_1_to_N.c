#include <stdio.h>

void printFrom1ToN(int call, int input)
{
    printf("%d\n", call);

    if (call == input)
    {
        return;
    }

    printFrom1ToN(call + 1, input);
}

int main()
{

    int call, input;
    scanf("%d", &input);

    printFrom1ToN(1, input);

    return 0;
}

/*
    input
    5

    output
    1
    2
    3
    4
    5
*/