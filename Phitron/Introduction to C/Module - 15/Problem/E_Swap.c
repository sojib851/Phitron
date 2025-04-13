#include <stdio.h>

void add()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int temp = x;
        x = y;
        y = temp;
        
        printf("%d %d", x, y);
}

int main(){

    add();

    return 0;
}

/*
    input
    5 2

    output
    2 5
*/