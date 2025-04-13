#include <stdio.h>

int main()
{
    double a, b, c, d;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if ((a + b * c == d || a - b * c == d) ||
        (a + b + c == d || a + b - c == d) ||
        (a - b - c == d || a - b + c == d))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}