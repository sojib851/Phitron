#include <stdio.h>
#include <string.h>

int main(){

    int a = 5;

    int *x = &a;

    int **y = &x;

    printf("%d %d", **y, *x);

    return 0;
}