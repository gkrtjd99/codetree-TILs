#include <stdio.h>

int seq(int n)
{
    if (n == 1)
        return (1);
    else if (n == 2)
        return (2);
    return seq(n/3) + seq(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", seq(n));
    return 0;
}