#include <stdio.h>

int main(){
    int i = 10;
    do{
        printf("inside do while\n", i);
        i++;
    }
    while(i < 5);

    return 0;
}