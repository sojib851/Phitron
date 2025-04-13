#include <stdio.h>
#include <string.h>

int main(){

    char str[20] = "dlroW olleH";
    int len = strlen(str);

    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        // string reverse method
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);
    

    return 0;
}