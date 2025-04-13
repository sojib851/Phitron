#include <stdio.h>

int main(){

    int i = 0;

    printf("Before while loop\n");
    while(i <= 50)
    {
        printf("Inside while loop, I = %d\n", i);
        i++;
    }
    printf("After while loop");

    return 0;
}