#include <stdio.h>
#include <string.h>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;
        // ei memory location a value ta rakhle 0 mane first index er value ta dibe
        //  jei index a acces korte cai tar index number ta dite hobe
        // ar print korar somoi "*" dile value ta dibe ar * na dile address ta print korte
    printf("%d %d\n", &arr[0], p);

    printf("%d\n", (p + 4));

    int a = 6;

    int *x = &a;

    printf("%d %d\n", x, x + 1);
    printf("%d %d\n", *x, *x + 1);

    return 0;
}

/*
    output

    6422276 6422276
    6422292
    6422272 6422276
    6       7

*/