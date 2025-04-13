#include <stdio.h>

int main(){

    char str[200];

    scanf("%[^\n]s", str);
    // fgetc(str, sizeof(str), stdin);
    

    // printf("%s", str);

    fputs(str, stdout);
    // printf() er kaj kore ata;

    return 0;
}

// depricated puts(str);