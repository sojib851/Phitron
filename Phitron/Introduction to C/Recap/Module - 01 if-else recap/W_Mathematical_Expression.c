#include <stdio.h>

int main(){

    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    // plus + 
    {
        if (a + b == c)
        {
            printf("Yes\n");
        }
        else{
            printf("%d", a + b);
        }
        
    }
    else if (s == '-')
    // minus - 
    {
        if (a - b == c)
        {
            printf("Yes\n");
        }
        else{
            printf("%d", a - b);
        }
        
    }
    else if (s == '*')
    // multiplecation 
    {
        if (a * b == c)
        {
            printf("Yes\n");
        }
        else{
            printf("%d", a * b);
        }
    }
    

    return 0;
}