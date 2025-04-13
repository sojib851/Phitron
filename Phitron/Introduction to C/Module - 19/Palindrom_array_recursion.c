#include <stdio.h>

int isPalin(int *a, int i, int j)
{
    if (i > j)
    {
        return 1;
    }
    
    return a[i] == a[j] && isPalin(a, i + 1, j - 1);
}

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    if(isPalin(arr, 0, n - 1)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

/*
    input
    11
    1 2 3 4 5 6 5 4 3 2 1

    output
    YES
*/