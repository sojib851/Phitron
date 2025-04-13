#include <stdio.h>

int main(){

    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);

    if (s == '>')
    // Greater
    {
        if(a > b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
        
    }
    else if (s == '<')
    // Lesser 
    {
        if(a < b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }

    else{
        // equal 
        if (a == b)
        {
        printf("Right");
        }
        else{
            printf("Wrong");
        }
        
        
    }
    return 0;
}