#include <stdio.h>
#include <string.h>

int main(){

    char a[100];
    char b[100];

    scanf("%s %s", a, b);

    int len_A = strlen(a);
    int len_B = strlen(b);

    for (int i = 0, j = 0; i < len_A; i++, j++)
    {
        if (a[i] < b[j])
        {
            printf("Smal : %s\n", a);
        }
        else if (a[i] > b[j])
        {
            printf("big : %s\n", b);
        }

        else if (len_A < len_B)
        {
            printf("smal : %s", a);
        }
        else if (len_A > len_B)
        {
            printf("smal : %s\n", b);
        }
        
        
        
        
    }
    

    return 0;
}