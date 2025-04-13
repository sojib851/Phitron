#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int evenCount = 0, oddCount = 0, positiveCount = 0, nagativeCount = 0;

    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        
        if(x % 2 == 0){
            evenCount++;
            
        }
        else{
            oddCount++;
            
        }

        if(x > 0){
            positiveCount++;
            
        }
        else if(x < 0){
            nagativeCount++;
            
        }
    }
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Nagative: %d\n", nagativeCount);

    return 0;
}