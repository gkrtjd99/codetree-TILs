#include <stdio.h>

int scan(char *c, char d)
{
    int i = 0;
    while(c[i])
    {
        if(c[i] != d)
            return (1);
        i++;
    }
    return (0);
}

int main() {
    char c[101];
    scanf("%s", c);

    int i = 0;
    while(c[i])
    {
        if(c, c[i])
        {
            printf("Yes");
            return 0;
        }
        i++;
    }
    printf("No");
    return 0;
}