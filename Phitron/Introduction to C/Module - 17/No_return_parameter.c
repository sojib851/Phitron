#include <stdio.h>

void add(int a, int b)
{ // void ai function ta kisui return korbe na
    printf("Function Called\n");

    int sum = a + b;

    printf("%d\n", sum);

    // return;

    // jokhon function theke kono kisu return expect korbo na tokhon void use korbo.
}

// যেমন ঃ

void alphaCheck(char c)
{
    if ('a' <= c && c <= 'z')
    {
        printf("Lower\n");
    }else{
        printf("Upper\n");
    }
    
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    add(a, b);

    alphaCheck('A');

    return 0;
}