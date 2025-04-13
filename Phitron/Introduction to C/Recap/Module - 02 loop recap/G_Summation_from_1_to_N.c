#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);


    long long sum = (1ll * (n + 1) * n) / 2;

    /*
    --> ei code ta 0.25 second er moddei run korte hobe na test case a dhora kheye jabe

    --> ata loop diyeo kora jaito. kintu loop diye korle 0.25 second er besi somoy lage er jonno avabe korte hobe

    long long sum = 0;
    for(int i = 1; i < n; i++){
        sum += i;
    }
    */

    printf("%lld", sum);
    

    return 0;
}