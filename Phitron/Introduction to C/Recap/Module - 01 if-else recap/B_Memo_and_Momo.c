#include <stdio.h>

int main(){

    long long a, b, k;

    scanf("%lld %lld %lld", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
    // a divisible by k and b divisible by k 
    {
        printf("Both");
    }

    else if (a % k == 0 && b % k != 0)
    // a divisible by k & b not divisible by k 
    {
        printf("Memo");
    }

    else if (a % k != 0 && b % k == 0)
    // a not divisible by k and b disible by k 
    {
        printf("Momo");
    }

    else{
        // if both a and b ar not divisible by k 
        printf("No One");
    }
    return 0;
}