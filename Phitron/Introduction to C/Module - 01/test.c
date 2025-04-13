#include <stdio.h>

int main(){
    int a, b, c, d;

    char ch;

    scanf(" %d %d %d %d %c", &a, &b, &c, &d, &ch);
    printf("A = %d\n B = %d\n C = %d\n D = %d\n ch = %c", a, b, c, d, ch);
    return 0;
}