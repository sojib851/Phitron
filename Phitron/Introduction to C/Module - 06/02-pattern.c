#include <stdio.h>

int main(){

    int n = 5;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");


        
    }

    for(int i = n - 1; i >= 1; i--){
        // print leading speces
        for(int k = n - 1; k > 0; k--){
            printf(" ");
        }
        // print numbers
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}