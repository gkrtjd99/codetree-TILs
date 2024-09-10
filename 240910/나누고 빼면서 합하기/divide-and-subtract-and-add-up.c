#include <stdio.h>

void check(int *b)
{
    if(*b >= 1)
    {
        if(*b % 2 == 0)
            *b /= 2;
        else
            *b -= 1;
    }
}
int main() {
    int a, b[1];
    scanf("%d %d", &a, &b[0]);
    int m[a], sum = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &m[i]);
    }
    while (b[0] > 0)
    {
        sum += m[b[0]-1];
        check(&b[0]);
    }
    printf("%d", sum);
    return 0;
}