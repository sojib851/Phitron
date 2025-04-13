#include <stdio.h>
#include <string.h>

void fun(char *x, char *y)
{
    x = strcpy(x, y);
}
int main(){

    char a[10] = "air";
    char b[10] = "apple";

    fun(a, b);
    printf("%s\n%s", a, b);

    return 0;
}