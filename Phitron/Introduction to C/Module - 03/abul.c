#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (N / 3 == 5)
        {
            printf("%d Yes\n",i);
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}