#include <stdio.h>

int main()
{
    int price;

    scanf("%d", &price);

    // ---> codnition - 1;
    if (price == 80)
    {
        printf("চার কেজি মুরি দেন\n");
        printf("আর বাকি %d টাকা ফেরত দেন\n", 80 - price);

        int alu = 40;
        // --> condition - 1.1;
        if (alu <= 50)
        {
            printf("৫ কেজি আলু দেন\n");
            printf("আর বাকি %d টাকা ফেরত দেন\n", 50 - alu);
        }
        // ---> condition - 1.2
        else if (alu >= 50)
        {
            printf("থাক লাগবে না\n");
            printf("আপনার আলু আপনি খান\n");
        }
    }

    // --> condition - 2;
    else if (price <= 90)
    {
        printf("পাচ কেজি মুরি দেন\n");
        printf("আর বাকি %d টাকা ফেরত দেন\n", 90 - price);

        int tel = 500;

        if (tel == 100)
        {
            printf("১০০ টাকা কেজি হলে ৫ কেজি তেল দেন\n");
        }
        else if (tel == 200)
        {
            printf("২০০ টকা কেজি হলে ৪ কেজি তেল দেন\n");
        }
        else if (tel == 500)
        {
            printf("আর ৫০০ টাকা হলে এক কেজি তেল দেন\n");
        }
    }

    else
    {
        printf("আর নাইলে এক কেজি মুরি দেন");
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}