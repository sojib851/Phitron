#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    // a is mini
    {
        if (b <= c)
        // c is max
        {
            printf("%d\n%d\n%d\n", a, b, c);
        }
        else{
            // b is max
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }
    else if (b <= a && b <= c)
        // b is mini
    {
        if (a <= c)
        // c is max
        {
            printf("%d\n%d\n%d", b, a, c);
        }
        else{
            // a is max
            printf("%d\n%d\n%d\n", b, c, a);
        }
        
    }
    else{
        // c is mini
        if (a <= b)
        // b is max
        {
            printf("%d\n%d\n%d", c, a, b);
        }
        else{
            // a is max
            printf("%d\n%d\n%d", c, b, a);
        }
        
    }
    
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);


    return 0;
}