#include <stdio.h>

int main(){

    char ch;

    scanf("%c", &ch);

    if('a' <= ch && ch <= 'z'){
        ch -= 32;
    }
    else{
        ch += 32;
    }

    printf("%c\n", ch);
    return 0;
}