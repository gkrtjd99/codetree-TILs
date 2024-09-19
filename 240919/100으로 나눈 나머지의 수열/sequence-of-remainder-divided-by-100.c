#include <stdio.h>
int g(int n, int p)
{
    if(n == 0)
        return p;
    else if (n == 1)
        p = 2;
    else if (n == 2)
        p = 4;
    else
    {
        p = g(n-1,p) * g(n-2,p) % 100;
    }
    return p;
}
int main() {
    int n, p = 2;
    scanf("%d", &n);
    printf("%d", g(n,p));
    return 0;
}