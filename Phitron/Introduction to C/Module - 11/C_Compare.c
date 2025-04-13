#include <stdio.h>
#include <string.h>

int main(){

    char x[22], y[22];

    scanf("%s %s", x, y);

    if (strcmp(x , y) < 0)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }
    return 0;
}

    /*
        input
        acm
        acpc

        output
        acm
    */