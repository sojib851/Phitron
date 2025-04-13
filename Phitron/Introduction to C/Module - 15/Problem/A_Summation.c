#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int array[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("%lld\n", llabs(sum)); // sum er vitor kono nagative number thakle llabs setake positive kore dey;

    return 0;
}