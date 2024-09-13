#include <stdio.h>

int fi(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    return (fi(n-1) + fi(n-2));
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fi(n));
    return 0;
}