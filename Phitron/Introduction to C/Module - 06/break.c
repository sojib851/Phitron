#include <stdio.h>

int main(){

    for(int i = 100; i < 300; i++){
        printf("Checking %d\n", i);
        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
            printf("%d is the number\n", i);
            break;
        }
    }

    // for(int k = 1; k <= 10; k++){
    //     printf("%d\n", k);

    //     printf("Line 1\n");
    //     printf("Line 2\n");
        
    //     if(k == 5){
    //         break;
    //     }
    //     printf("Line 3\n");
    //     printf("Line 4\n");
    // }
    return 0;
}