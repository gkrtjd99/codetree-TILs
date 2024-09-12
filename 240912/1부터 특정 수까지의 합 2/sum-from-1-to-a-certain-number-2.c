#include <stdio.h>

int f_n(int n)
{
    if (n == 1)
        return 1;
    return (f_n(n-1) + n);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",f_n(n));
    return 0;
}