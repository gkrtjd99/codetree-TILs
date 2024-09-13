#include <stdio.h>

int to_1(int n)
{
    if (n == 1)
        return (0);
    else if (n % 2== 0)
        n /= 2;
    else
        n /= 3;
    return (to_1(n) + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", to_1(n));
    return 0;
}