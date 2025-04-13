#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    // int found = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            
            printf("%d\n", i);
            // found++;
        }
        if(i % 2 == 1){
            printf("-1\n");
        }
    }

    return 0;
}