#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        if(i % n == 0){

            printf("%d\n", i);

            if (i != n / i){

                printf("%d\n", n / i);
            }
        }
    }

    return 0;
}