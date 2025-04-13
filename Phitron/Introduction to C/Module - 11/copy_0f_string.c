#include <stdio.h>
#include <string.h>

int main()
{

    /*  string copy
        Option : 1 --->
    */

    // char a[10] = "ABCD";

    // char b[10] = "abcdef";

    // int length = strlen(b);

    // printf("%s %s\n", a, b);

    // for (int i = 0; i < length; i++)
    // {
    //     a[i] = b[i];
    // }

    // a[length] = '\0';

    // printf("%s %s", a, b);



    /*     string copy
        Option : 2 --->
    */

    char a[20] = "ABCD EFGH";

    char b[20] = "a b c d e f k i r e";
    printf("%s %s\n", a, b);

    strcpy(b , "welcome");
    printf("%s\n", b);

    // strcpy(des(jetar vitore rakhte cacchi), source(jetar vitor str ache))
    strcpy(b, a);

    printf("%s\n%s", a, b);


    return 0;
}