#include <stdio.h>
#include <string.h>

int main(){

    char str[10000005];

    int count[26] = {0};

    // scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        scanf("%c", &str);
    }
    

    for (int i = 0; i < strlen(str); i++)
    {

        count[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
        
    }
    
    
    return 0;
}