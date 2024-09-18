#include <stdio.h>

int g(int d)
{
    if (d < 10)
        return d;
    return (g(d/10) + d % 10);
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = a * b * c;
    printf("%d",g(d));
    return 0;
}