#include <stdio.h>

int array[100000], sum = 0;

// Get The Sum From i to n,
int getSum(int i, int n)
{
    if (i == n)
    {
        return 0;
    }

    return array[i] + getSum(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int result = getSum(0, n);

    printf("%d\n", result);


    return 0;
}

/*
    input
    6
    1 2 3 4 5 200
    
    output
    215

*/