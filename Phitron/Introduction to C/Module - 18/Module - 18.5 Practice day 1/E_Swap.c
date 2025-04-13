#include <stdio.h>

void swap()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int temp = x;
    x = y;
    y = temp;

    printf("%d %d", x, y);
}
int main()
{
    swap();

    return 0;
}
/*/
    input
    5 2

    output
    2 5
*/