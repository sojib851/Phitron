int main()
{

    int n, t;
    scanf("%d %d", &n, &t);

    int time[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &time[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (t < time[i])
        {
            break;
        }
        t = t - time[i];
        count++;
    }
    printf("%d", count);

    return 0;
}

/*
    input
    10 33
    1 3 4 6 8 10 12 15 23 36

    output
    6
*/