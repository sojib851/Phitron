#include <stdio.h>


int add()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a + b;

    printf("%d\n", sum);

    return sum;
}

void multi(int x, int y)
{
    printf("%d", x * y);
}
int main(){

    multi(add(), 10);

    // add();

    return 0;
}

/*
    input
    5 5

    output
    10 
    100
*/