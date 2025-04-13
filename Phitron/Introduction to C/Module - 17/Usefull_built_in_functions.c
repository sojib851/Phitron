#include <stdio.h>
#include <math.h>

int main(){

    double a = 10.00000; //output : 10
    double b = 10.00001; //output : 11

    printf("%2.lf\n", ceil(a));
    printf("%2.lf\n", ceil(b));

    double c = 10.999999;
    double d = 10.999999;
    printf("%lf\n", floor(c)); // floor sobsomoy nicche namiye rakhe
    printf("%lf\n", round(d)); // 


    printf("%lf\n", sqrt(25)); //
    // printf("%lf\n", pow(2.5)); //

    return 0;
}