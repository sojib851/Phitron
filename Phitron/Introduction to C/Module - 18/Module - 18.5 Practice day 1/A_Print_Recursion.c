#include <stdio.h>

void nTimes(int n)
{
    if (n == 0)
    {
        return;
    }
    
    printf("I love Recursion\n");

    nTimes(n - 1);

}

int main()
{
    int n;
    scanf("%d", &n);

    nTimes(n);
    return 0;
}

/*
    input
    3

    output
    I love Recursion
    I love Recursion
    I love Recursion
*/