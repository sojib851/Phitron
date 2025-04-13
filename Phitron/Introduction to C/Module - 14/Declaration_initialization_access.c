#include <stdio.h>
#include <string.h>

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("i = %d, j = %d, address = %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
    output
    i = 0, j = 0, address = 1
    i = 0, j = 1, address = 2
    i = 0, j = 2, address = 3

    i = 1, j = 0, address = 4
    i = 1, j = 1, address = 5
    i = 1, j = 2, address = 6

    i = 2, j = 0, address = 7
    i = 2, j = 1, address = 8
    i = 2, j = 2, address = 9


*/