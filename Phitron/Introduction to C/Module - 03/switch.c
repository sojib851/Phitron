#include <stdio.h>

int main()
{

    int day = 3, hour = 10;

    switch (day)
    {
    case 1:
        printf("Suturday\n");
        switch (hour)
        {
        case 10:
            printf("Going into the 10 hour later\n");
        }
        break;

        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Suturday\n");
        break;
    case 5:
        printf("Suturday\n");
        break;
    case 6:
        printf("Suturday\n");
        break;
    case 7:
        printf("Suturday\n");
        break;
    default:
        printf("Worng day");
        break;
    }

    return 0;
}