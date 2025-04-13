#include <stdio.h>


int add(int x, int y)
{
    int sum = x + y;

    return sum;
}
int main(){

    int x, y;

    scanf("%d %d", &x, &y);

    int sum = add(x, y);

    printf("%d", sum);

    return 0;
}

/*
    input
    5 2

    output
    7
*/