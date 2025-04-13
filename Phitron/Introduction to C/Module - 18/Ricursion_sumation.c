#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}


int main()
{

    int number = 5;
    int result = sum(number);
    printf("1 theke %d porjonto jogfol: %d\n", number, result);

    return 0;
}

/*
    output
    1 theke 5 porjonto jogfol: 15

*/