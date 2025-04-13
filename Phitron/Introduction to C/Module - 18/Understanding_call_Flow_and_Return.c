#include <stdio.h>


void function2()
{
    printf("Inside Function2\n");

}
void function1()
{
    printf("Before function call (Inside function1)\n");
    function2();
    printf("After function call (inside function1)\n");

}
int main(){

    printf("Before function call in mian\n");
    function1();
    printf("After function call in mian\n");
    return 0;
}

/*
    output
    Before function call in mian
    Before function call (Inside function1)
    Inside Function2
    After function call (inside function1)
    After function call in mian

*/