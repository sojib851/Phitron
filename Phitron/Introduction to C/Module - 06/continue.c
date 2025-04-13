#include <stdio.h>

int main(){

    // for(int i = 100; i <= 300; i++){

    //     if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
            
    //         printf("%d is the numebr\n", i);
    //     }

    //     printf("%d is not the number\n", i);
    // }


    int k;
    scanf("%d", &k);
    for(int k = 1; k <= 10; k++){
        printf("%d\n", k);

        printf("Line 1\n");
        printf("Line 2\n");
        
        if(k == 5){
            continue;
        }
        printf("Line 3\n");
        printf("Line 4\n");
    }
    return 0;
}