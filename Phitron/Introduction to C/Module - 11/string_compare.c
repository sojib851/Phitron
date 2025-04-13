#include <stdio.h>
#include <string.h>

int main(){

    char a[100] = "air";
    char b[100] = "apple";

/*
    
* String Compare
1. strcmp(a, b) 1st er ta jodi boro hoi and 2nd jodi choto hoy tahole result hobe +1 (positive).
2. ar 1st er ta choto hole 2nd ta boro hole  -1 (negative)
3. and == soman hole 0.
*/
    int cmp = strcmp(b, a);

    printf("%d", cmp);

    return 0;
}