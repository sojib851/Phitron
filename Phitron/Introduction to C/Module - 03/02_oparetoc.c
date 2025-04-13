#include <stdio.h>
#include<stdbool.h>

int main(){

    bool result = !((7 > 5) && (5 > 8) && (6 < 7));
    //              true      false       true  = 0  ...একটা ফালস হলেই উত্তরঃ ফালস

    printf("result = %d\n", result);

    bool result2 = (8 == 9) || (2 == 3) || (5 == 5);
    //                 false      false     true =  1  ....একটা ট্রু হলেই উত্তরঃ ট্রু

    printf("result2 = %d", result2);

    return 0;
}