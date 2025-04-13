#include <stdio.h>

long long getMissingNumber(long long m, long long a, long long b, long long c)
{
    long long product = a * b * c;

    if (product != 0 && m % product == 0)
    {
        return m / product;
    }
    else if (m == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        printf("%lld\n", getMissingNumber(m, a, b, c));
    }

    return 0;
}

/*
input
4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15

output
5
-1
-1
0

*/