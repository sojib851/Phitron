#include <stdio.h>
#include <string.h>

int main(){

    // int a = 2;

    // int *b = &a;

    // int value = *b;

    // printf("%d\n", &a);

    // printf("%d\n", *b);

    // printf("%d\n", value);

    int a = 5, b = 6;

    int *x = &a, *y = &b;
    
    printf("%d %d\n", a, b);
    // sudhu x ke rakhle adress ta rakha hobe * dile value ta rakha hobe
    // atake bola hoy "dereference";
    int temp = *x;

    *x = *y;
    *y = temp;

    printf("%d %d", a, b);

    return 0;
}