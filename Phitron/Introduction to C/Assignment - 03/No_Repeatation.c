#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    // if (n == 1)
    // {
    //     int val;
    //     scanf("%d", &val);
    //     printf("%d", 1);
    //     return 0;
    // }
    int arr[n + 5];
    int fre[100005] = {0};

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        fre[arr[i]]++;
    }

    int count = 0;
    for (int i = 0; i <= 100000; i++)
    {
        if (fre[i] == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}


/*
    input
    10
    1 4 3 3 5 2 4 6 2 3

    output
    3
*/