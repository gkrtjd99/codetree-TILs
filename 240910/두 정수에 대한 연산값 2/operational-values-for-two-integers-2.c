#include <stdio.h>

void sw(int *a, int *b)
{
    if (*a < *b)
    {
        *a += 10;
        *b *= 2;
    }
    else
    {
        *a *= 2;
        *b += 10;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sw(&a,&b);
    printf("%d %d",a, b);
    return 0;
}