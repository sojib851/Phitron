#include <stdio.h>

int call(int x[], int y)
{
    int sum = 0;

    for (int i = 0; i < y; i++)
    {
        sum += x[i];
    }

    return sum;
    
}

int main()
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = call(a, 10);

    printf("%d ", result);

    return 0;
}