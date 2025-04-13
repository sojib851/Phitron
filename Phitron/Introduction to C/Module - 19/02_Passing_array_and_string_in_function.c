#include <stdio.h>
#include <string.h>
#include <ctype.h>

void makeFirstCharUpper(char x[])
{
    x[2] = toupper(x[2]); //prOgrammin

    printf("%s", x);
}

int main()
{

    char str[20] = "programmin";

    makeFirstCharUpper(str);

    return 0;
}