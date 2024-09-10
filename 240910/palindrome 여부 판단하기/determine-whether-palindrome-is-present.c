#include <stdio.h>

int main() {
    char a[101];
    scanf("%s", a);
    int len = 0;
    while(a[len])
        len++;
    len --;
    for(int i = 0; i < len/2; i++)
    {
        if (a[i] == a[len])
            len--;
        else
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}