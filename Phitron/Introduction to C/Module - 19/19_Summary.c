// #include <stdio.h>
// void m(int *p)
// {
// int i = 0;
// for (i = 0; i < 5; i++)
// printf("%d ", p[i]);
// output : 6 5 3 0 0
// }
// int main()
// {
// int a[5] = {6, 5, 3};
// m(a);
// }

    // Quiz ----> 
// #include <stdio.h>
// int main()
// {
// int ary[4] = {1, 2, 3, 4};
// printf("%d\n", *ary);
// //output: 1
// }


// Quiz ------> 
#include <stdio.h>
int main()
{
int ary[4] = {1, 2, 3, 4};
int *p;
p = ary + 3;
*p = 5;
printf("%d\n", ary[3]);
}