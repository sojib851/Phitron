#include <stdio.h>

int main(){

        int n;
    scanf("%d", &n);
    
    int count1 = 0, count2 = 0;
    
    for(int i = 1; i <= n; i++){
        
        int x;
        scanf("%d", &x);
        
        if(x == 0){
            count1++;
            
        }
        else if(x == 1){
            count2++;
            
        }
        
    }
        printf("%d ", count1);
        printf("%d", count2);

    return 0;
}