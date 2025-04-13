#include <stdio.h>

int main(){

    for(int hour = 1; hour <= 3; hour++){
        for(int minute = 1; minute <= 4; minute++){
            for(int second = 1; second <= 5; second++){

            printf("%d hour %d minute %d second\n", hour, minute, second);

            }
                printf("\n");
        }
                printf("\n");
    }

    return 0;
}