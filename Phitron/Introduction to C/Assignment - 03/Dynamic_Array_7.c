#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);

    int *array = (int *) malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    free(array);

    return 0;
}

/*
input
5
1 4 2 6 9

output
1 4 2 6 9 
*/