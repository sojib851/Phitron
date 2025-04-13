#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        printf("%d ", a[j]);
    }
    
    

    return 0;
}

/* Reversing

    input
    11
    0 1 2 3 4 5 6 7 8 9 10

    output
    10 9 8 7 6 5 4 3 2 1 0

*/