#include <stdio.h>
#include <math.h>


void findMinMax(int a, int b, int c, int *min, int *max)
{

    *min = a;
    *max = a;

    if (b < *min) *min = b;
    if (c < *min) *min = c;
    

    if (b > *max) *max = b;
    if (c > *max) *max = c;
    

}

int main(){

    int a, b, c;
    int min, max;

    scanf("%d %d %d", &a, &b, &c);


    findMinMax(a, b, c, &min, &max);

    printf("%d %d\n", min, max);
        

    return 0;
}