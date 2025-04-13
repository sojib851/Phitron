#include <stdio.h>

/*
    return_type function_name(parameters)
    {
        statements;


        return result;
    }
*/

int add(int a, int b) //a = 10, b = 20;
{
    printf("Function Called\n");
    int sum = a + b;

    return sum;
}


int main()
{
    // int result = add(10, 20);

    printf("Before\n"); // প্রথমে main এই ফাংশনে ডুকবে তারপর যদি কোন কল পায় add অথবা
                        // অন্ন কোন ফংশন কল করা হলে সেটা একজিকিউট হবে তারপর কিছু একটা রিটার্ন করে দিবে।
                        // 

    printf("%d\n", add(13, 17)); // তার পর এটা একজিকিউট হবে 

    printf("%d\n", add(30, 200));  
    printf("%d\n", add(40, 200));
    printf("%d\n", add(50, 200));
    printf("%d\n", add(60, 200)); //জতোবার কল করা হবে ফাংশন কে ততো বার (add) এই ফাংশন টা একজিকিউট হবে।

    printf("After\n"); //তারপর এটা একজিকিউট হবে। 



    return 0;
}
/*
    এক কথায় প্রথমে main function এ ডুকবে যদি কোন কিছু কল না পায় তাহলে main function জা আছে তাই একজিকিউট হবে
    আর যদি কোন কল পায় তাহলে কল ফাংশনে চলে যাবে কল ফাংশনে জা কিছু আছে তা একজিকিউট হবে। তারপর কিছু রিটার্ন করবে।
    তারপর আবার main function এ এশে কোড সেস করবে।

    যেমন ঃ output
    
    Before
    Function Called
    30
    Function Called
    230
    Function Called
    240
    Function Called
    250
    Function Called
    260
    After


*/