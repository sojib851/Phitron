#include <stdio.h>
#include <string.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5];
    int freq[100005];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        freq[a[i]] += 1;
    }


    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }
    
    

    return 0;
}

/*
    input
    10 5
    1 2 3 4 5 3 2 1 5 3

    output
    2
    2
    3
    1
    2

*/