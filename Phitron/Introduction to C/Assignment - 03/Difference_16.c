#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b;
    int *pA = &a;
    int *pB = &b;

    scanf("%d %d", pA, pB);

    int difference = abs(*pA - *pB);
    printf("%d\n", difference);

    return 0;
}
/*
    input
    6 10

    output
    4
*/

/*




*/

/*
   1. int *pA = &A; এবং int *pB = &B; লাইনগুলোতে আমরা দুটি পয়েন্টার
    pA এবং pB ব্যবহার করেছি, যেগুলো যথাক্রমে সংখ্যা A এবং B এর ঠিকানা সংরক্ষণ করে।

    2. scanf("%d %d", pA, pB); ব্যবহার করে আমরা A এবং B এর মান ইনপুট নিয়েছি।
    পয়েন্টার ব্যবহার করে ইনপুট গ্রহণ করার জন্য আমরা pA এবং pB পাস করেছি।

    3. abs(*pA - *pB); এই অংশে A এবং B এর মধ্যে পার্থক্যের মান abs() ফাংশন
    ব্যবহার করে ধনাত্মক করে নিয়েছি। এরপর difference ভেরিয়েবল প্রিন্ট করেছি।

*/
