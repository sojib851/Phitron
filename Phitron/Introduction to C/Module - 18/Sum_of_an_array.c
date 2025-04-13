#include <stdio.h>

int array[100000], sum = 0;

void goToIndex(int i, int n)
{
    if (i == n)
    {
        return;
    }
    sum += array[i];

    goToIndex(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    sum = 0;

    goToIndex(0, n);

    printf("%d\n", sum);
    ;
    return 0;
}

/*
    intput
    6
    1 2 3 4 5 200

    output
    215
*/