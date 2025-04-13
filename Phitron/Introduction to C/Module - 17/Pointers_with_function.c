#include <stdio.h>

void swap(int *x, int *y) // reference of mian a, b
{
    printf("Func: %p %p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int a = 555, b = 666;

    swap(&a, &b);

    printf("mian: %p %p\n", &a, &b);

    printf("%d %d\n", a, b);

    return 0;
}

/*  same address
    2 option ---->
    option 1: call by value.
    option 2: call by reference.

    output:
    Func: 0061FF1C 0061FF18
    mian: 0061FF1C 0061FF18
    666 555

*/

/*
    kono akta kaj jodi bar bar korte hoy tahole tokhon amra function 
    use korbo. tahole ekoi code bar bar lekhte hobe na. 😊
*/