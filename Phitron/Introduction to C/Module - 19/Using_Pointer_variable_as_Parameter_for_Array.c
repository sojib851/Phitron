#include <stdio.h>

void fun(int *x, int n)
/*
যেহেতু আমরা এখানে এরের এদ্রেস টা রিসিব করতেছি, তাই আমরা
x[] . এভাবে দিয়ে ও করতে পারি এবং
*x pointer দিয়ে ও করতে পারি।
*/
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");

    x[0] = 563; /* শুধু ভেলু টা নিয়ে যদি ফাংশনে চেঞ্জ করি তাহলে main ফাংশনে চেঞ্জ
                    হবে না। যেহেতু এরের এড্রেস টা পাঠানো হইছে তাই ফাংশনে চেঞ্জ করলে
                    main ফাংশনের ভেলু সহ চেঞ্জ হবে ;
                */
    x[4] = -2;
}
int main()
{

    int a[5] = {1, 2, 3, 4, 5};

    fun(a, 5); // a এই এরের এড্রেস টা যাবে ।

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    /*
        output
        1 2 3 4 5
        563 2 3 4 5
    */
    return 0;
}