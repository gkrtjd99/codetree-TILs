#include <stdio.h>
int g(int n, int p)
{
    if(n==1)
        return p;
    else if (n % 2 == 0)
        n /= 2;
    else 
        n = n * 3 + 1;
    return g(n, p+1);
}
int main() {
    int n, p = 0;
    scanf("%d", &n);
    printf("%d", g(n,p));
    return 0;
}