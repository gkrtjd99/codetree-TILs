#include <stdio.h>

int sw(int *a, int *b)
{
    if(*a > *b)
    {
        *a += 25;
        *b *= 2;
    }
    else
    {
        *a *= 2;
        *b += 25;
    }
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sw(&a,&b);
    printf("%d %d",a,b);
    return 0;
}